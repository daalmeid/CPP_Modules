/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:07 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/14 11:30:08 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {

	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void) {

	std::cout << "WrongCat destructor called" << std::endl;

}

WrongCat::WrongCat(WrongCat const& src) {

	*this = src;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs) {

	if (this != &rhs)
	this->_type = rhs.getType();

	return *this;
}

void	WrongCat::makeSound(void) const {

	std::cout << "MUUUUUUUUUUU!" << std::endl;
	return ;
}

