/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:54:41 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/11 19:32:32 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


void	toUpper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			std::cout << (char) (*str - 32) ;
		else
			std::cout << *str;
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv++;
	while (*argv != NULL)
		toUpper(*argv++);
	std::cout << std::endl;
	return (0);
	
}
