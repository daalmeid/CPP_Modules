/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:45 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/14 11:29:02 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {

	this->_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const& src): Animal() {

	*this = src;
	return ;
}

Dog&	Dog::operator=(Dog const& rhs) {

	if (this != &rhs)
	this->_type = rhs.getType();

	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "BAAAAARRRRRKKKK!" << std::endl;
	return ;
}

