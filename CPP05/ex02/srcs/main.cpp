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
		Bureaucrat phil = Bureaucrat("Phil", 100);
		std::cout << phil << " is born" << std::endl;
		ShrubberyCreationForm shrub = ShrubberyCreationForm("House");
		shrub.beSigned(phil);
		phil.executeForm(shrub);
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
	

	try
	{
		Bureaucrat john = Bureaucrat("John", 50);
		std::cout << john << " is born" << std::endl;
		RobotomyRequestForm robby = RobotomyRequestForm("Robby");
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


	try
	{
		Bureaucrat steve = Bureaucrat("Steve", 2);
		std::cout << steve << " is born" << std::endl;
		PresidentialPardonForm carl = PresidentialPardonForm("Deathrow Carl");
		carl.beSigned(steve);
		steve.executeForm(carl);
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

	return 0;
}