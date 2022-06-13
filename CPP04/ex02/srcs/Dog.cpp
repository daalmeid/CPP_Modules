/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:45 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 16:41:25 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

	std::cout << "Default Dog constructor called" << std::endl;
	AAnimal::_type = "Dog";
	this->dogBrain = new Brain;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
	delete dogBrain;
}

Dog::Dog(Dog const& src) {

	std::cout << "Copy Dog constructor called" << std::endl;
	this->dogBrain = new Brain;
	*this = src;
	return ;
}

Dog&	Dog::operator=(Dog const& rhs) {

	if (this != &rhs)
	{
		this->_type = rhs.getType();
		for (size_t i = 0; i < 100; i++) {
			
			this->setIdea(i, rhs.getIdea(i));
		}
	}

	return *this;
}

void	Dog::makeSound(void) const {

	std::cout << "BAAAAARRRRRKKKK!" << std::endl;
	return ;
}

std::string	Dog::getIdea(int index) const {

	if (index < 0 || index > 99)
		return "Invalid thought index";
	else
		return this->dogBrain->ideas[index];
}

void		Dog::setIdea(int index, std::string idea) {

	this->dogBrain->ideas[index] = idea;
}
