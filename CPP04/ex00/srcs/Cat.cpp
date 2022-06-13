/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:11 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:33:38 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {

	Animal::_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;

}

Cat::Cat(Cat const& src) {

	*this = src;
	return ;
}

Cat&	Cat::operator=(Cat const& rhs) {

	if (this != &rhs)
	this->_type = rhs.getType();

	return *this;
}

void	Cat::makeSound(void) const {

	std::cout << "MIIIIIIAAAAAAAAUUUUU!" << std::endl;
	return ;
}

