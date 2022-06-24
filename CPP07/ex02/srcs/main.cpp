/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/22 17:07:46 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Bureaucrat.hpp"

int	main(void) {

	Array<Bureaucrat>	porOffice(10);
	Array<Bureaucrat>	lisOffice(porOffice);

	Bureaucrat	john("john", 42);
	porOffice[0] = john;
	std::cout << "Porto office:" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << porOffice[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Lisbon office:" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << lisOffice[i] << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << porOffice[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: Out of bounds index." << std::endl;
	}
	
	try
	{
		Array<int>	test;
		std::cout << test[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: Out of bounds index." << std::endl;
	}

	Array<int>	testInt(10);
	
	for (size_t i = 0; i < testInt.size(); i++)
	{
		testInt[i] = i + 1;
		std::cout << testInt[i] << std::endl;
	}	
	return 0;
}

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }