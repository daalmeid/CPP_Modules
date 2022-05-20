/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/19 14:39:55 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	testHorde = zombieHorde(8, "Phil");
	Zombie*	secHorde = zombieHorde(8, "Steve");

	for (size_t i = 0; i < 8; i++)
	{
		testHorde[i].announce();
		secHorde[i].announce();
	}
	delete[] testHorde;
	delete[] secHorde;
	return 0;
}
