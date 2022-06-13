/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/13 15:10:20 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	soldier("Soldier");
	ClapTrap	general("General");

	soldier.takeDamage(4);
	general = soldier;
	general.clapTrapStat();
	general.takeDamage(5);
	general.clapTrapStat();
	general.beRepaired(12);
	general.clapTrapStat();
	general.takeDamage(4);
	general.clapTrapStat();
	general.attack("Soldier");
	general.clapTrapStat();
	for(size_t i = 0; i < 10; i++)
	{
		general.attack("Soldier");
		general.clapTrapStat();
	}
	soldier.takeDamage(20);
	soldier.clapTrapStat();
	soldier.takeDamage(20);
	soldier.clapTrapStat();
	soldier.beRepaired(10);
	soldier.clapTrapStat();
	return 0;
}

