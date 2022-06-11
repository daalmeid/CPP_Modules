/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMAteria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type) {

	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(void) {

	//std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void) {

	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & m) {

	*this = m;
	std::cout << "AMateria copy constructor called" << std::endl;

}

AMateria& AMateria::operator=(AMateria const & rhs) {

	(void)rhs;
	return *this;
}

std::string const & AMateria::getType() const {

	return this->_type;
}

void AMateria::use(ICharacter& target) {

	(void)target;
}
