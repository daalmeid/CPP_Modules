/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:47:09 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/20 09:38:42 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {

	std::string		brainTalk = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brainTalk;
	std::string&	stringREF = brainTalk;

	std::cout << "string address: "<< &brainTalk << std::endl;
	std::cout << "pointer held address: "<< &stringPTR << std::endl;
	std::cout << "reference held address: "<< &stringREF << std::endl << std::endl;

	std::cout << "string value: "<< brainTalk << std::endl;
	std::cout << "value pointed by pointer: "<< *stringPTR << std::endl;
	//std::cout << "value pointed by pointer + 1: "<< *(++stringPTR) << std::endl;
	stringPTR = NULL;
	std::cout << "value pointed by reference: "<< stringREF << std::endl;
	//std::cout << "value pointed by reference + 1: "<< ++stringREF << std::endl;
	//stringREF = NULL;
	return 0;
}