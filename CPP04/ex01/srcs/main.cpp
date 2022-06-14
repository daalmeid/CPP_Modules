/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:23:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/14 11:46:39 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal* farm[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			farm[i] = new Cat;
		else
			farm[i] = new Dog;
	}
	std::cout << "first element of farm is a " << farm[0]->getType() << " and last is a " << farm[9]->getType() << std::endl;
	
	//************** CAT COPY TESTS ********************

	std::cout << ((Cat*)farm[0])->getIdea(0) << std::endl;
	Animal	*testCat = new Cat(*((Cat*)farm[0]));
	((Cat*)farm[0])->setIdea(0, "WOLOLOLO I'm a cat!");
	std::cout << ((Cat*)farm[0])->getIdea(0) << std::endl;
	std::cout << ((Cat*)testCat)->getIdea(0) << std::endl;
	delete testCat;
	
	//************** DOG COPY TESTS ********************
	
	std::cout << ((Dog*)farm[9])->getIdea(10) << std::endl;
	Animal	*testDog = new Dog(*((Dog*)farm[9]));
	((Dog*)farm[9])->setIdea(10, "WEEEEEE I'm a dog!");
	std::cout << ((Dog*)farm[9])->getIdea(10) << std::endl;
	std::cout << ((Dog*)testDog)->getIdea(10) << std::endl;
	delete testDog;

	for (size_t i = 0; i < 10; i++)
		delete farm[i];
	
	//************** SUBJECT TESTS *********************

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}