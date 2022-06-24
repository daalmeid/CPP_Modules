/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Default") {

	//std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade): _name(name) {

	//std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void) {

	//std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b): _name(b.getName()) {

	*this = b;
	//std::cout << "Bureaucrat copy constructor called" << std::endl;

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs) {

	this->_grade = rhs.getGrade();
	return *this;
}

std::string const & Bureaucrat::getName(void) const {

	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const {

	return this->_grade;
}

void Bureaucrat::gradeUp(void) {

	if (this->_grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade - 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade--;
}

void Bureaucrat::gradeDown(void) {

	if (this->_grade + 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what(void) const  throw() {

	return ("Invalid grade, maximum is 1.");
}

const char* Bureaucrat::GradeTooLowException::what(void) const  throw() {

	return ("Invalid grade, minimum is 150.");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {

	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}