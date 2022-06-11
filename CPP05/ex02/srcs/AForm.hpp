/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class AForm
{
	public:

	AForm(std::string const name, unsigned int const signGrade, unsigned int const execGrade);
	virtual ~AForm(void);
	AForm(AForm const & b);
	AForm& operator=(AForm const & rhs);

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
	virtual void	execute(Bureaucrat const & executor) const = 0;
	void	checkGrades(unsigned int bureauGrade) const;


	private:

	AForm(void);
	std::string const	_name;
	bool				_isSigned;
	unsigned int const	_signGrade;
	unsigned int const	_execGrade;

};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif