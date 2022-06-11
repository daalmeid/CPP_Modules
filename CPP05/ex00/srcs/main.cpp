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

int	main(void) {

	try
	{
		Bureaucrat phil = Bureaucrat("Phil", 149);
		std::cout << phil << " is born" << std::endl;
		phil.gradeDown();
		std::cout << phil << " was demoted" << std::endl;
		phil.gradeDown();
		std::cout << phil << " was demoted" << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "Let's try to create John, grade 200" << std::endl;
		Bureaucrat john = Bureaucrat("John", 200);
		std::cout << john << " is born, the poor defective bastard" << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Let's try to create Phil, grade 0" << std::endl;
		Bureaucrat phil = Bureaucrat("Phil", 0);
		std::cout << phil << " is born" << std::endl;
		phil.gradeUp();
		std::cout << phil << " was promoted" << std::endl;
		phil.gradeDown();
		std::cout << phil << " was demoted" << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}