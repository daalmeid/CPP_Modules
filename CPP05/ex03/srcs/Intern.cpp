/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern(void){

	//std::cout << "Default Intern constructor called" << std::endl;
}

Intern::~Intern(void) {

	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const & b) {

	*this = b;
	//std::cout << "Intern copy constructor called" << std::endl;

}

Intern& Intern::operator=(Intern const & rhs) {

	(void)rhs;
	return *this;
}

const char* Intern::WrongFormException::what(void) const  throw() {

	return ("The dumb intern provided the wrong file type!");
}

AForm*	Intern::makeForm(std::string const formType, std::string const target) {

	enum	formTypes {
		
		Robotize,
		Shrubbery,
		Pardon
	};
	std::string	existForms[3] = {"Robotomy Request", "Shrubbery Request", "Presidential Pardon"};
	int typeIndex = 0;

	while (typeIndex < 3)
	{
		if (formType == existForms[typeIndex])
			break;
		typeIndex++;
	}

	AForm* ptr;
	switch (typeIndex)
	{
		case Robotize:
			ptr = new RobotomyRequestForm(target);
			break;
		case Shrubbery:
			ptr = new ShrubberyCreationForm(target);
			break;
		case Pardon:
			ptr = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::WrongFormException();
	}
	std::cout << "Intern creates " << formType << std::endl;
	return ptr;
}
