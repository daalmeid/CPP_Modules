/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:47:09 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/24 15:39:56 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Wrong input, expected: ./harlFilter <filter>" << std::endl;
		return 1;
	}
	
	std::string	newFilter;
	newFilter = (argv[1]);
	
	Harl	newHarl(newFilter);

	newHarl.complain("DEBUG");
	std::cout << std::endl;
	newHarl.complain("INFO");
	std::cout << std::endl;
	newHarl.complain("WARNING");
	std::cout << std::endl;
	newHarl.complain("ERROR");
	std::cout << std::endl;
	newHarl.complain("STUPID");
	std::cout << std::endl;
	newHarl.complain("");
	return 0;
}