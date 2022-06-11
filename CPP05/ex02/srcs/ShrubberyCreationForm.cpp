/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:19:12 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:19:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//ShrubberyCreationForm::ShrubberyCreationForm(void) {
//
//	//std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
//}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target): 
		AForm("Shrubbery", 145, 137), _target(target) {

	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & f):
		AForm(f.getName(), f.getSignGrade(), f.getExecGrade()), _target(f.getTarget()) {

	//this->_isSigned = f.getIsSigned(); DEVE SER ACESSÍVEL????
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	(void)rhs;
	std::cout << "Cannot attribute values of one ShrubberyCreationForm to another" << std::endl;
	return *this;
}

std::string const & ShrubberyCreationForm::getTarget(void) const {

	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (getIsSigned() == false)
		throw std::exception();
	checkGrades(executor.getGrade());
	std::ofstream shrubFile;
	std::string	filename = this->getTarget() + "_shrubbery";
	shrubFile.open(filename.c_str());
	if (shrubFile.is_open())
	{
		shrubFile << "     ###           ###           ###     " << std::endl;
		shrubFile << "    #o###         #o###         #o###    " << std::endl;
		shrubFile << "  #####o###     #####o###     #####o###  " << std::endl;
		shrubFile << " #o#\\#|#/###   #o#\\#|#/###   #o#\\#|#/### " << std::endl;
		shrubFile << "  ###\\|/#o#     ###\\|/#o#     ###\\|/#o#  " << std::endl;
		shrubFile << "   # }|{ #       # }|{ #       # }|{ #   " << std::endl;
		shrubFile << "     }|{           }|{           }|{     " << std::endl;
		shrubFile << " ____}|{___________}|{___________}|{_____" << std::endl;
	}
	shrubFile.close();
}
