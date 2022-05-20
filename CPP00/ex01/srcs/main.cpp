/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:23:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/17 12:56:05 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ios>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook 	test;
	std::string	command;

	std::cout << "Welcome! Choose an action: ADD, SEARCH or EXIT" << std::endl;
	while (command.compare("EXIT") != 0)
	{
		if (std::cin.eof() == 1) {
			
			std::cout << std::endl << "Phonebook closed." << std::endl;
			return 0;
		}
		std::cout << "Action: ";
		std::getline(std::cin,command);
		if (command.compare("ADD") == 0)
			test.add();
		else if (command.compare("SEARCH") == 0)
			test.search();
	}
	std::cout << "Bye bye, see you next time!" << std::endl;
	return 0;
}