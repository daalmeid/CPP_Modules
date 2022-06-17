/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:17:00 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/17 13:07:34 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv) {

	int	i = 1;
	int comCounter = 0;
	
	if (argc != 2)
	{
		std::cout << "\033[31mWrong use: the program only accepts 1 string as argument." << std::endl;
		return 1;
	}
	if (isdigit(argv[1][0]) || argv[1][0] == '-')
	{
		while (argv[1][i] != '\0')
		{
			if ((!isdigit(argv[1][i]) && argv[1][i] != 'f') || comCounter > 1)
			{
				std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
				return 1;
			}
			else if (argv[1][i] == '.')
				comCounter++;
			else if (argv[1][i] == 'f' && (argv[1][i + 1] != '\0' || comCounter == 0))
			{
				std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
				return 1;
			}
			i++;
		}
		if (argv[1][i - 1] == 'f')
			"Is a float.";
		else if (comCounter == 1)
			"is a double.";
		else
			"is an int.";
	}
	else
	{
		if (argv[1][1] != '\0')
		{
			std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
			return 1;
		}
		"Is a char.";
	}
}