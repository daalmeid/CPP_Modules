/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150)  {

	//std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(std::string const name, unsigned int const signGrade, unsigned int const execGrade):
	_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade) {

	std::cout << "AForm constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
	{
		throw AForm::GradeTooHighException();
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		throw AForm::GradeTooLowException();
	}
}

AForm::~AForm(void) {

	std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm const & f): 
_name(f.getName()), _signGrade(f.getSignGrade()), _execGrade(f.getExecGrade()) {

	this->_isSigned = f.getIsSigned();
	//std::cout << "AForm copy constructor called" << std::endl;

}

AForm& AForm::operator=(AForm const & rhs) {

	(void)rhs;
	std::cout << "Cannot attribute values of one AForm to another" << std::endl;
	return *this;
}

std::string const & AForm::getName(void) const {

	return this->_name;
}

unsigned int AForm::getSignGrade(void) const {

	return this->_signGrade;
}

unsigned int AForm::getExecGrade(void) const {

	return this->_execGrade;
}

bool AForm::getIsSigned(void) const {

	return this->_isSigned;
}

void	AForm::beSigned(Bureaucrat const & b) {

	if (b.getGrade() > this->_signGrade)
	{
		b.signForm(this->_isSigned, this->_name, "its level is too low.");
		throw AForm::GradeTooLowException();
	}
	else if (this->_isSigned == true)
		b.signForm(this->_isSigned, this->_name, "the Aform was already signed");
	else
	{	
		this->_isSigned = true;
		b.signForm(this->_isSigned, this->_name, "");
	}
}

void	AForm::checkGrades(unsigned int bureauGrade) const {

	if (bureauGrade > this->_execGrade)
		throw AForm::GradeTooLowException();
}

const char* AForm::GradeTooHighException::what(void) const  throw() {

	return ("Grade is too high for this Aform action.");
}

const char* AForm::GradeTooLowException::what(void) const  throw() {

	return ("Grade is too low for this Aform action.");
}

std::ostream& operator<<(std::ostream& os, const AForm& b) {

	os << b.getName() << " form.";
	return os;
}