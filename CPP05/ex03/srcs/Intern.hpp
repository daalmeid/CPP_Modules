/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

	Intern(void);
	~Intern(void);
	Intern(Intern const & b);
	Intern& operator=(Intern const & rhs);

	class	WrongFormException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	AForm*	makeForm(std::string const formType, std::string const target);

	private:

};

std::ostream& operator<<(std::ostream& os, const Intern& b);

#endif