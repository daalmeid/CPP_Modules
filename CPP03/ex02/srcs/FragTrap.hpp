/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:56 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 17:00:52 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap	 {

	public:

		FragTrap(const std::string& name);
		~FragTrap(void);
		FragTrap(FragTrap const& src);
		FragTrap&	operator=(FragTrap const& rhs);

		void 	highFivesGuys(void) const;
		void	attack(const std::string& target);

	private:
		FragTrap(void);

};

#endif