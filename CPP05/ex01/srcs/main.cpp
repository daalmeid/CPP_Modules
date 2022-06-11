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
#include "Form.hpp"

int	main(void) {

	try
	{
		Bureaucrat phil = Bureaucrat("Phil", 100);
		std::cout << phil << " is born" << std::endl;
		phil.gradeDown();
		std::cout << phil << " was demoted" << std::endl;
		phil.gradeDown();
		std::cout << phil << " was demoted" << std::endl;
		Form	B22 = Form("B22", 100, 82);
		B22.beSigned(phil);
		B22.beSigned(phil);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}