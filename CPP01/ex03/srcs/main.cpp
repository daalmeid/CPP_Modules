/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:47:09 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/23 10:38:51 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon sword = Weapon("a well crafted sword");
		HumanB sirStabsalot("Sir Stabs-a-lot");
		sirStabsalot.attack();
		sirStabsalot.setWeapon(sword);
		sirStabsalot.attack();
		sword.setType("a crappy sword");
		sirStabsalot.attack();
	}
	return 0;
}