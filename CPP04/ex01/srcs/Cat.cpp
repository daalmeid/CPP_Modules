/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:11 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 15:38:15 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	std::cout << "Default Cat constructor called" << std::endl;
	Animal::_type = "Cat";
	this->catBrain = new Brain;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;
	delete catBrain;

}

Cat::Cat(Cat const& src) {

	std::cout << "Copy Cat constructor called" << std::endl;
	this->catBrain = new Brain;
	*this = src;
	return ;
}

Cat&	Cat::operator=(Cat const& rhs) {

	if (this != &rhs)
	{
		this->_type = rhs.getType();
		for (size_t i = 0; i < 100; i++) {
			
			this->setIdea(i, rhs.getIdea(i));
		}
	}

	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "MIIIIIIAAAAAAAAUUUUU!" << std::endl;
	return ;
}

std::string	Cat::getIdea(int index) const {

	if (index < 0 || index > 99)
		return "Invalid thought index";
	else
		return this->catBrain->ideas[index];
}

void		Cat::setIdea(int index, std::string idea) {

	this->catBrain->ideas[index] = idea;
}
