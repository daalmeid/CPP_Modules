/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:

	PresidentialPardonForm(std::string const target);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & b);
	PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);

	std::string const & getTarget(void) const;
	virtual void	execute(Bureaucrat const & executor) const;

	private:

	PresidentialPardonForm(void);
	std::string const	_target;

};

#endif