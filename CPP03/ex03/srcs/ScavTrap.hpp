/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:56 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/01 16:15:35 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap	 {

	public:

		ScavTrap(const std::string& name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const& src);
		ScavTrap&	operator=(ScavTrap const& rhs);

		void	guardGate(void) const;
		void	attack(const std::string& target);
		int		getEP(void) const;

	protected:
		ScavTrap(void);

};

#endif