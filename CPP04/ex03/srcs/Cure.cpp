/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {

	//std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(void) {

	//std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure const & m): AMateria("cure") {

	*this = m;
	//std::cout << "Cure copy constructor called" << std::endl;

}

Cure& Cure::operator=(Cure const & rhs) {

	(void)rhs;
	return *this;
}

void Cure::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone(void) const {

	AMateria*	cloneCure = new Cure();
	//std::cout << "clone created" << std::endl;
	return cloneCure;
}
