/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 12:53:55 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 12:53:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	try
	{
		Bureaucrat phil("Phil", 100);
		std::cout << phil << " is born" << std::endl;
		AForm* shrub = new ShrubberyCreationForm("House");
		phil.executeForm(*shrub);
		(*shrub).beSigned(phil);
		delete shrub;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl <<std::endl;

	try
	{
		Bureaucrat john("John", 50);
		std::cout << john << " is born" << std::endl;
		RobotomyRequestForm robby("Robby");
		robby.beSigned(john);
		john.executeForm(robby);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl <<std::endl;

	try
	{
		Bureaucrat steve("Steve", 4);
		std::cout << steve << " is born" << std::endl;
		PresidentialPardonForm carlPardon("Deathrow Carl");
		carlPardon.beSigned(steve);
		carlPardon.execute(steve);
		steve.executeForm(carlPardon);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}