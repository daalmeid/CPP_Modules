/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <cstdlib>
# include <time.h>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:

	RobotomyRequestForm(std::string const target);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & b);
	RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

	std::string const & getTarget(void) const;
	virtual void	execute(Bureaucrat const & executor) const;

	private:

	RobotomyRequestForm(void);
	std::string const	_target;

};

#endif