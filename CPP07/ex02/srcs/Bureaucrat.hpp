/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:

	Bureaucrat(void);
	Bureaucrat(std::string const name, unsigned int grade);
	~Bureaucrat(void);
	Bureaucrat(Bureaucrat const & b);
	Bureaucrat& operator=(Bureaucrat const & rhs);

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
	unsigned int getGrade(void) const;

	void	gradeUp(void);
	void	gradeDown(void);

	private:

	std::string const	_name;
	unsigned int		_grade;

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif