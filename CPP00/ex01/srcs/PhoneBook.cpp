/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:54:41 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/18 15:20:15 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	
	max_index = 0;
	index = 0;
	return;
}

PhoneBook::~PhoneBook(void) {

	return;
}

void	PhoneBook::search(void) const {

	int	i = 0;
	std::string chosen_ind;
	
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|  FIRST N.|   LAST N.|  NICKNAME|" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	while (i < max_index)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		search_print(list[i].getFirstName());
		search_print(list[i].getLastName());
		search_print(list[i++].getNickname());
		std::cout << "|" << std::endl;
		std::cout << " -------------------------------------------" << std::endl;
	}
	if (i == 0)
	{
		std::cout << "Empty phonebook, please add contacts first." << std::endl;
		return;
	}
	std::cout << "Choose an index: ";
	std::getline(std::cin, chosen_ind);
	if (chosen_ind.length() > 1 || chosen_ind[0] - '0' > max_index || chosen_ind[0] - '0' <= 0)
		std::cout << "Non-existent index, please enter SEARCH again and retry" << std::endl;
	else
	{
		std::cout << "First name: " << list[chosen_ind[0] - '0' - 1].getFirstName() << std::endl;
		std::cout << "Last name: " << list[chosen_ind[0] - '0' - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << list[chosen_ind[0] - '0' - 1].getNickname() << std::endl;
		std::cout << "Phone number: " << list[chosen_ind[0] - '0' - 1].getPhoneNb() << std::endl;
		std::cout << "Dark secret: " << list[chosen_ind[0] - '0' - 1].getDarkSecret() << std::endl;
	}
	return;

}

void	PhoneBook::search_print(std::string s) const {
	
	if (s.length() <= 10)
		std::cout << "|" << std::setw(10) << s;
	else if (s.length() > 10)
		std::cout << "|" << std::setw(9) << s.substr(0, 9) << ".";
}

void 	PhoneBook::add(void) {

	std::string str;
	
	std::cout << "First name: ";
	std::getline(std::cin >> std::ws, str);
	if (std::cin.eof() == 1)
		return ;
	list[index].setFirstName(str);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, str);
	if (std::cin.eof() == 1)
		return ;
	list[index].setLastName(str);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, str);
	if (std::cin.eof() == 1)
		return ;
	list[index].setNickname(str);
	std::cout << "Phone number: ";
	std::getline(std::cin >> std::ws, str);
	if (std::cin.eof() == 1)
		return ;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			std::cout << "Invalid input, phone number has to be all numeric characters." << std::endl;
			std::cout << "Phone number: ";
			std::getline(std::cin >> std::ws, str);
			if (std::cin.eof() == 1)
				return ;
			i = 0;
		}
	}
	list[index].setPhoneNb(str);
	std::cout << "Dark secret: ";
	std::getline(std::cin >> std::skipws, str);
	if (std::cin.eof() == 1)
		return ;
	list[index].setDarkSecret(str);
	std::cout << "Contact added" << std::endl;
	if (max_index < 8)
		max_index++;
	index++;
	if (index == 8)
		index = 0;

	return;
}
