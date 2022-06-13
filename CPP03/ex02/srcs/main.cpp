/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/13 15:23:46 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	// ClapTrap	soldier("Soldier");
	FragTrap	commander("Commander");
	FragTrap	general(commander);

	commander.takeDamage(4);
	commander.clapTrapStat();
	general = commander;
	general.clapTrapStat();
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
	commander.highFivesGuys();
	commander.clapTrapStat();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	// soldier.takeDamage(20);
	// soldier.clapTrapStat();
	return 0;
}

