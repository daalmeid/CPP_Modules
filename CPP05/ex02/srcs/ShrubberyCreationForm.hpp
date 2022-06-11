/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <fstream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:

	ShrubberyCreationForm(std::string const target);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & b);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

	std::string const & getTarget(void) const;
	virtual void	execute(Bureaucrat const & executor) const;

	private:

	ShrubberyCreationForm(void);
	std::string const	_target;

};

#endif