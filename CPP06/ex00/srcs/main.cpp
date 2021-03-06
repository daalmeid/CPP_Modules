/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:17:00 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 11:22:32 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"


int	main(int argc, char **argv) {
	
	if (argc != 2)
	{
		std::cout << "\033[31mWrong use: the program only accepts 1 string as argument." << std::endl;
		return 1;
	}
	Converter conv;
	std::string val(argv[1]);
	conv.convSelector(val);
	return 0;
}