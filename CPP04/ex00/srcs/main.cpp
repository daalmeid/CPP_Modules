/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:23:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:26:23 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "Good cat and animal:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* new_i = new Cat();
	std::cout << std::endl;
	std::cout << meta->getType() << " is the type of meta;" << std::endl;
	std::cout << j->getType() << " is the type of j;" << std::endl;
	std::cout << new_i->getType() << " is the type of i;" << std::endl;
	std::cout << std::endl;
	new_i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete new_i;
	
	std::cout << std::endl << "Wrong cat and animal:" << std::endl << std::endl;
	meta = new Animal();
	j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << std::endl;
	std::cout << meta->getType() << " is the type of meta;" << std::endl;
	std::cout << j->getType() << " is the type of j;" << std::endl;
	std::cout << i->getType() << " is the type of i;" << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	return 0;
}