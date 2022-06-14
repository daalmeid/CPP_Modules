/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:23:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/14 11:24:43 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "Good cat and animal:" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	std::cout << meta->getType() << " is the type of meta variable;" << std::endl;
	std::cout << dog->getType() << " is the type of dog variable;" << std::endl;
	std::cout << cat->getType() << " is the type of cat variable;" << std::endl;
	std::cout << std::endl;
	std::cout << cat->getType() << " says: ";
	cat->makeSound();
	std::cout << dog->getType() << " says: ";
	dog->makeSound();
	std::cout << meta->getType() << " says: ";
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	
	std::cout << std::endl << "Wrong cat and animal:" << std::endl << std::endl;
	meta = new Animal();
	dog = new Dog();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;
	std::cout << meta->getType() << " is the type of meta variable;" << std::endl;
	std::cout << dog->getType() << " is the type of dog variable;" << std::endl;
	std::cout << wrongCat->getType() << " is the type of wrongCat variable;" << std::endl;
	std::cout << std::endl;
	std::cout << wrongCat->getType() << " says: ";
	wrongCat->makeSound();
	std::cout << dog->getType() << " says: ";
	dog->makeSound();
	std::cout << meta->getType() << " says: ";
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete wrongCat;

	return 0;
}