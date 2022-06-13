
#include "Fixed.hpp"

Fixed::Fixed(void) {
	
	std::cout << "Default constructor called" << std::endl;
	this->_fixPtNum = 0;
}

Fixed::Fixed(int const intNum) {
	
	this->_fixPtNum = intNum << this->_fractBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const floatNum) {
	
	int	x = (int) roundf(floatNum * (float) (1 << this->_fractBits));
	this->_fixPtNum = x;
	std::cout << "Float constructor called" << std::endl;
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

int	const Fixed::_fractBits = 8;

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {

	o << i.toFloat();
	return o;
}