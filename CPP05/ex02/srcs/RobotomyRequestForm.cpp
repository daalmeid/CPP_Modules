/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//RobotomyRequestForm::RobotomyRequestForm(void) {
//
//	//std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
//}

RobotomyRequestForm::RobotomyRequestForm(std::string const target): 
		AForm("Robotomy Request", 72, 45), _target(target) {

	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & f):
		AForm(f.getName(), f.getSignGrade(), f.getExecGrade()), _target(f.getTarget()) {

	//this->_isSigned = f.getIsSigned(); DEVE SER ACESSÍVEL????
	//std::cout << "RobotomyRequestForm copy constructor called" << std::endl;

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	(void)rhs;
	std::cout << "Cannot attribute values of one RobotomyRequestForm to another" << std::endl;
	return *this;
}

std::string const & RobotomyRequestForm::getTarget(void) const {

	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (getIsSigned() == false)
		throw std::exception();
	checkGrades(executor.getGrade());
	srand(time(NULL));
	int val = rand() % 2;
	std::cout << "BRRRT BZZZZ BZZZ WEEEEEEEEE STKSTKSTK" << std::endl;
	if (val == 0)
		std::cout << "Congratulations! " << this->_target << " is now Mecha-" << this->_target << "!" << std::endl;
	else
		std::cout << "Robotomy of " << this->_target << " failed!" << std::endl;
}
