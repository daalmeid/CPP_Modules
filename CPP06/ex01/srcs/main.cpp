/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:17:00 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 11:51:40 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void) {
	
	Data	test("What can I do for you today?");

	std::cout << "Original address: " << &test << std::endl;
	std::cout << test.getQuestion() << std::endl;
	
	uintptr_t	ptr = test.serialize(&test);

	std::cout << "ptr serialized: " << ptr << std::endl;
	
	Data*	reintPtr = test.deserialize(ptr);
	std::cout << "desserialized address: " << reintPtr << std::endl;

	std::cout << reintPtr->getQuestion() << std::endl;

	return 0;
}