/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/19 12:12:53 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	firstZombie = newZombie("Tony");
	
	randomChump("Jim");
	std::cout << "After Jim is done" << std::endl;
	firstZombie->announce();
	std::cout << "What?" << std::endl;
	firstZombie->announce();
	std::cout << "I can't hear you!" << std::endl;
	firstZombie->announce();
	std::cout << "MAKE SOME NOISE TONY!" << std::endl;
	firstZombie->announce();
	delete firstZombie;
	
	return 0;
}
