/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:38:15 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/01 11:40:43 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//***************** CONSTRUCTORS *******************

Fixed::Fixed(void) {
	
	//std::cout << "Default constructor called" << std::endl;
	this->_fixPtNum = 0;
}

Fixed::Fixed(int const intNum) {
	
	this->_fixPtNum = intNum << this->_fractBits;
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatNum) {
	
	int	x = (int) roundf(floatNum * (1 << this->_fractBits));
	this->_fixPtNum = x;
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {

	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {

	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//***************** MATH OPERATORS *****************


Fixed&	Fixed::operator=(Fixed const& rhs) {

	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixPtNum = rhs.getRawBits();

	return *this;
}

Fixed	Fixed::operator+(Fixed const& rhs) const {

	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const& rhs) const {

	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const& rhs) const {

	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const& rhs) const {

	return Fixed(this->toFloat() / rhs.toFloat());
}

//***************** COMPARISON OPERATORS ***********

bool	Fixed::operator>(Fixed const& rhs) const {

	if (this->_fixPtNum > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const& rhs) const {

	if (this->_fixPtNum < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const& rhs) const {

	if (this->_fixPtNum >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const& rhs) const {

	if (this->_fixPtNum <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const& rhs) const {

	if (this->_fixPtNum == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const& rhs) const {

	if (this->_fixPtNum != rhs.getRawBits())
		return true;
	return false;
}

//***************** INC/DECREMENT OPERATORS ********

Fixed&	Fixed::operator++(void) {

	this->_fixPtNum++;
	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed	temp(*this);
	this->_fixPtNum++;
	return temp;
}

Fixed&	Fixed::operator--(void) {

	this->_fixPtNum--;
	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed	temp(*this);
	this->_fixPtNum--;
	return temp;
}

//***************** MIN AND MAX ********************

Fixed&	Fixed::min(Fixed& one, Fixed& two) {

	std::cout << "min ref constructor called" << std::endl;
	if (one._fixPtNum < two._fixPtNum)
		return one;
	return two;
}

Fixed&	Fixed::min(Fixed const& one, Fixed const& two) {

	std::cout << "const min ref constructor called" << std::endl;
	if (one._fixPtNum < two._fixPtNum)
		return (Fixed&) one;
	return (Fixed&) two;
}

Fixed&	Fixed::max(Fixed& one, Fixed& two) {

	std::cout << "max ref constructor called" << std::endl;
	if (one._fixPtNum > two._fixPtNum)
		return one;
	return two;
}

Fixed&	Fixed::max(Fixed const& one, Fixed const& two) {

	std::cout << "const max ref constructor called" << std::endl;
	if (one._fixPtNum > two._fixPtNum)
		return (Fixed&) one;
	return (Fixed&) two;
}

//***************** OTHER PUBLIC *******************


int	Fixed::getRawBits(void) const {

	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPtNum;
}

void	Fixed::setRawBits(int const raw) {

	this->_fixPtNum = raw;
}

float	Fixed::toFloat(void) const {
	
	return (float) (this->_fixPtNum / (float) (1 << this->_fractBits));
}

int	Fixed::toInt(void) const {
	
		return (this->_fixPtNum >> this->_fractBits);
}

//***************** PRIVATE ELEMENTS ***************

int	const Fixed::_fractBits = 8;

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return o;
}