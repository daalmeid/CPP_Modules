/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:47:09 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/24 12:58:49 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int	main(void) {

	Harl	newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("ERROR");
	newHarl.complain("WARNING");
	newHarl.complain("STUPID");
	newHarl.complain("");
//	std::cout << "Here" << std::endl;
	return 0;
}