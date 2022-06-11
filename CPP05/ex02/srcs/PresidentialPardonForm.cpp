/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//PresidentialPardonForm::PresidentialPardonForm(void) {
//
//	//std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
//}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): 
		AForm("Presidential Pardon", 25, 5), _target(target) {

	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & f):
		AForm(f.getName(), f.getSignGrade(), f.getExecGrade()), _target(f.getTarget()) {

	//this->_isSigned = f.getIsSigned(); DEVE SER ACESSÍVEL????
	//std::cout << "PresidentialPardonForm copy constructor called" << std::endl;

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	(void)rhs;
	std::cout << "Cannot attribute values of one PresidentialPardonForm to another" << std::endl;
	return *this;
}

std::string const & PresidentialPardonForm::getTarget(void) const {

	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (getIsSigned() == false)
		throw std::exception();
	checkGrades(executor.getGrade());
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
