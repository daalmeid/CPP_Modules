/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{
	public:

	Form(std::string const name, unsigned int const signGrade, unsigned int const execGrade);
	~Form(void);
	Form(Form const & b);

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	std::string const & getName(void) const;
	bool getIsSigned(void) const;
	unsigned int getSignGrade(void) const;
	unsigned int getExecGrade(void) const;

	void	beSigned(Bureaucrat const & b);


	private:

	Form(void);
	Form& operator=(Form const & rhs);
	
	std::string const	_name;
	unsigned int const	_signGrade;
	unsigned int const	_execGrade;
	bool				_isSigned;

};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif