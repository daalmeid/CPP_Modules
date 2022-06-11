/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("Default"),  _signGrade(150), _execGrade(150), _isSigned(false) {

	//std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string const name, unsigned int const signGrade, unsigned int const execGrade):
	_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {

	std::cout << "Form constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::~Form(void) {

	std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form const & f): 
_name(f.getName()), _signGrade(f.getSignGrade()), _execGrade(f.getExecGrade()) {

	this->_isSigned = f.getIsSigned();
	//std::cout << "Form copy constructor called" << std::endl;

}

Form& Form::operator=(Form const & rhs) {

	std::cout << "Cannot attribute values of one Form to another" << std::endl;
	return *this;
}

std::string const & Form::getName(void) const {

	return this->_name;
}

unsigned int Form::getSignGrade(void) const {

	return this->_signGrade;
}

unsigned int Form::getExecGrade(void) const {

	return this->_execGrade;
}

bool Form::getIsSigned(void) const {

	return this->_isSigned;
}

void	Form::beSigned(Bureaucrat const & b) {

	if (b.getGrade() > this->_signGrade)
	{
		b.signForm(this->_isSigned, this->_name, "its level is too low.");
		throw Form::GradeTooLowException();
	}
	else if (this->_isSigned == true)
		b.signForm(this->_isSigned, this->_name, "the form was already signed");
	else
	{	
		this->_isSigned = true;
		b.signForm(this->_isSigned, this->_name, "");
	}
}

const char* Form::GradeTooHighException::what(void) const  throw() {

	return ("Grade is too high for this form action.");
}

const char* Form::GradeTooLowException::what(void) const  throw() {

	return ("Grade is too low for this form action.");
}

std::ostream& operator<<(std::ostream& os, const Form& b) {

	os << b.getName() << " form, grade to sign of " << b.getSignGrade();
	os << " and grade to execute of " << b.getExecGrade() << ", currently ";
	if (b.getIsSigned() == false)
		os << "not signed";
	else
		os << "signed";
	return os;
}