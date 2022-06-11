/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {

	//std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(void) {

	//std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(Ice const & m): AMateria("ice") {

	*this = m;
	//std::cout << "Ice copy constructor called" << std::endl;

}

Ice& Ice::operator=(Ice const & rhs) {

	(void)rhs;
	return *this;
}

void Ice::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone(void) const {

	AMateria*	cloneIce = new Ice();
	//std::cout << "clone created" << std::endl;
	return cloneIce;
}
