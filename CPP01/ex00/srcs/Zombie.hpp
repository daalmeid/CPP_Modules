/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:18 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/19 14:30:20 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>

class	Zombie {

	public:

		Zombie(std::string name);
		~Zombie(void);
		void	announce( void );

	private:

		std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif