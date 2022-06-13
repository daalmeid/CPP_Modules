/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:40:14 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 14:40:16 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	
	std::cout << "Default constructor called" << std::endl;
	this->_fixPtNum = 0;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixPtNum = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPtNum;
}

void	Fixed::setRawBits(int const raw) {

	this->_fixPtNum = raw;
}

int	const Fixed::_fractBits = 8;