/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:16:44 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:02:29 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const& src) {

	*this = src;
	return ;
}

Animal&	Animal::operator=(Animal const& rhs) {

	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

std::string	Animal::getType(void) const {

	return this->_type;
}

void	Animal::makeSound(void) const{

	std::cout << "*Incomprehensible noise*" << std::endl;
	return ;
}
