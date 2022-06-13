/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:56 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 17:00:52 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap	 {

	public:

		DiamondTrap(const std::string& name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap&	operator=(DiamondTrap const& rhs);

		void 	whoAmI(void) const;
		void	attack(const std::string& target);

	private:
		const std::string	_name;
		DiamondTrap(void);

};

#endif