/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:55:38 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 15:09:29 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.h"
#include <stdexcept>

void identify(Base* p) {

	std::cout << "Pointer function called: " << std::endl;
	if ( dynamic_cast<A*>(p) == NULL)
	{
		if (dynamic_cast<B*>(p) == NULL)
			std::cout << "C" << std::endl;
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;
}

void identify(Base& p) {
	
	std::cout << "Reference function called: " << std::endl;
	try
	{
		A& ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B& ref = dynamic_cast<B&>(p);
			(void)ref;
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			std::cout << "C" << std::endl;
		}
	}
}