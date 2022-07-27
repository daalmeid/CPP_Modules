/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:26:32 by daalmeid          #+#    #+#             */
/*   Updated: 2022/07/27 15:43:22 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main( void ) {

	std::vector<int>	myvector;

	myvector.push_back(0);
	myvector.push_back(42);
	myvector.push_back(32);
	myvector.push_back(11);
	myvector.push_back(1122);
	myvector.push_back(6786);
	myvector.push_back(4);
	myvector.push_back(23);

	std::vector<int>::iterator i = easyFind< std::vector<int> >(myvector, 4);
	std::cout << *i << std::endl;
	try
	{
		std::vector<int>::iterator j = easyFind< std::vector<int> >(myvector, -2);
		std::cout << *j << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}
	try
	{
		std::vector<int>::iterator k = easyFind< std::vector<int> >(myvector, 21000);
		std::cout << *k << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}
	try
	{
		std::vector<int>::iterator l = easyFind< std::vector<int> >(myvector, 11);
		std::cout << *l << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}

	std::cout << std::endl << std::endl;

	std::list<int>	mylist;

	mylist.push_back(0);
	mylist.push_back(42);
	mylist.push_back(32);
	mylist.push_back(11);
	mylist.push_back(1122);
	mylist.push_back(6786);
	mylist.push_back(4);
	mylist.push_back(23);

	std::list<int>::iterator m = easyFind< std::list<int> >(mylist, 4);
	std::cout << *m << std::endl;
	try
	{
		std::list<int>::iterator n = easyFind< std::list<int> >(mylist, -2);
		std::cout << *n << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}
	try
	{
		std::list<int>::iterator o = easyFind< std::list<int> >(mylist, 21000);
		std::cout << *o << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}
	try
	{
		std::list<int>::iterator p = easyFind< std::list<int> >(mylist, 11);
		std::cout << *p << std::endl;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << "Element does not exist in container" << std::endl;
	}

	return 0;
}