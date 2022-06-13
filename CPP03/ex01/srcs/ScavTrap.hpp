/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:56 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 16:39:59 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap	 {

	public:

		ScavTrap(const std::string& name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const& src);
		ScavTrap&	operator=(ScavTrap const& rhs);

		void	guardGate(void) const;
		void	attack(const std::string& target);

	private:
		ScavTrap(void);

};

#endif