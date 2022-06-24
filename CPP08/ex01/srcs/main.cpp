/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/23 19:44:04 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {

	Span	test(30);

	srand(time(NULL));

	std::cout << "Test 1:" << std::endl;
	for (int i = 0; i < 25; i++)
	{
		int addNum = rand() % 1000;
		test.addNumber(addNum);
		std::cout << addNum << " ";
	}
	std::cout << std::endl;
	
	std::cout << "smallest span " << test.shortestSpan() << std::endl;
	std::cout << "longest span " << test.longestSpan() << std::endl << std::endl;

	try
	{
		Span	test2(25);

		std::cout << "Test 2:" << std::endl;
		std::cout << "smallest span " << test2.shortestSpan() << std::endl;
		std::cout << "longest span " << test2.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	try
	{
		Span	test3(25);

		std::cout << "Test 3:" << std::endl;
		for (int i = 0; i < 30; i++)
		{
			int addNum = rand() % 1000;
			test3.addNumber(addNum);
			std::cout << addNum << " ";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span	test4(15000);

		std::cout << "Test 4:" << std::endl;
		for (int i = 0; i < 15000; i++)
		{
			int addNum = rand() % 100000;
			test4.addNumber(addNum);
		}
		std::cout << "smallest span " << test4.shortestSpan() << std::endl;
		std::cout << "longest span " << test4.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Test 5:" << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::vector<int> vt;

	vt.push_back(6);
	vt.push_back(3);
	vt.push_back(17);
	vt.push_back(9);
	vt.push_back(11);
	
	try
	{
		std::cout << "Test 6:" << std::endl;
		test.addRange(vt.begin(), vt.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout <<test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Test 7:" << std::endl;
		vt.push_back(42);
		test.addRange(vt.begin(), vt.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout <<test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}