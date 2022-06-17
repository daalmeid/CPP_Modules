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
#include "Intern.hpp"

int	main(void) {

	try
	{
		Bureaucrat steve("Steve", 2);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Robotomy Request", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(steve);
			steve.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("Shrubbery Request", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(steve);
			steve.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(steve);
			steve.executeForm(*rrf);
			delete rrf;
		}
		rrf = someRandomIntern.makeForm("Wrong file", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(steve);
			steve.executeForm(*rrf);
			delete rrf;
		}
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
	catch(const Intern::WrongFormException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}