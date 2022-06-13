/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:16:44 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:11:28 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal") {
	
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {

	*this = src;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs) {

	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

std::string	WrongAnimal::getType(void) const {

	return this->_type;
}

void	WrongAnimal::makeSound(void) const{

	std::cout << "*Incomprehensible and wrong noise*" << std::endl;
	return ;
}
