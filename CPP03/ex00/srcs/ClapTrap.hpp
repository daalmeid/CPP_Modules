/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:25:50 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 14:34:35 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {

	public:

		ClapTrap( const std::string& name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap& src);
		
		ClapTrap&	operator=(const ClapTrap& rhs);
		std::string	getName(void) const;

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	 beRepaired(unsigned int amount);
		void	 clapTrapStat(void) const;

	private:

		ClapTrap(void);
		const std::string	_name;
		int					_HP;
		int					_EP;
		int					_atkDmg;

};

#endif