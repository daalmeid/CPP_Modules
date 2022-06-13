/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 17:03:53 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	// ClapTrap	soldier("Soldier");
	// ClapTrap	general("General");
	ScavTrap	commander("Commander");

	commander.takeDamage(4);
	commander.clapTrapStat();
	commander.takeDamage(5);
	commander.clapTrapStat();
	commander.beRepaired(12);
	commander.clapTrapStat();
	commander.takeDamage(4);
	commander.clapTrapStat();
	commander.attack("Soldier");
	commander.clapTrapStat();
	for(size_t i = 0; i < 10; i++)
	{
		commander.attack("Soldier");
		commander.clapTrapStat();
	}
	commander.guardGate();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	return 0;
}

