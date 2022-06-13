/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:16:44 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:02:29 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
	
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src) {

	*this = src;
	return ;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs) {

	if (this != &rhs)
		this->_type = rhs.getType();

	return *this;
}

std::string	AAnimal::getType(void) const {

	return this->_type;
}
