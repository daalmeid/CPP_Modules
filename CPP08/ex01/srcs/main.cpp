/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>


int	main(void) {

	Span	test(30);

	srand(time(NULL));

	std::cout << "Test 1:" << std::endl;
	for (int i = 0; i < 25; i++)
	{
		int newNum = rand() % 1000;
		test.addNumber(newNum);
		std::cout << newNum << " ";
	}
	std::cout << std::endl;
	
	std::cout << "smallest span " << test.shortestSpan() << std::endl;
	std::cout << "longest span " << test.longestSpan() << std::endl << std::endl;

	try
	{

		std::cout << "Special test, copy constructor:" << std::endl;
		Span	test2(test);

		test2.addNumber(-2147483648);
		test2.addNumber(2147483647);
		std::cout << "original span object content after adding two numbers to copy:" << std::endl;
		test.printRange();
		
		std::cout << "copy span object content after adding two numbers to it:" << std::endl;
		test2.printRange();
		
		std::cout << "smallest span " << test2.shortestSpan() << std::endl;
		std::cout << "longest span " << test2.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	try
	{
		Span	test2(25);

		std::cout << "Test 2, with empty span:" << std::endl;
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

		std::cout << "Test 3, with more insertions than span size:" << std::endl;
		for (int i = 0; i < 30; i++)
		{
			int newNum = rand() % 1000;
			test3.addNumber(newNum);
			std::cout << newNum << " ";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span	test4(15000);

		std::cout << "Test 4, with span of 15000 numbers randomized:" << std::endl;
		for (int i = 0; i < 15000; i++)
		{
			int newNum = rand() % 100000;
			test4.addNumber(newNum);
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

		sp.addNumber(11);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(6);
		std::cout << "Test 5, with span of {6, 3, 17, 9, 11}:" << std::endl;
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
		std::cout << "Test 6, adding a range of numbers to the Span object:" << std::endl;
		std::cout << "Before:" << std::endl << std::endl;
		test.printRange();
		test.addRange(vt.begin(), vt.end());
		
		std::cout << "After:" << std::endl << std::endl;
		test.printRange();
		
		std::cout << test.shortestSpan() << std::endl;
		std::cout <<test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Test 7, adding one more element than capacity:" << std::endl;
		vt.push_back(42);
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
		Span	extremes(5);
		std::cout << "Test 8, Span with only biggest and smallest int:" << std::endl;
		extremes.addNumber(-2147483648);
		extremes.addNumber(2147483647);
		std::cout << "shortest range: " << extremes.shortestSpan() << std::endl;
		std::cout << "longest range: " << extremes.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}