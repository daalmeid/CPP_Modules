/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:23:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 16:52:06 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	//AAnimal		testAnimal = AAnimal();
	AAnimal*	AbsCat = new Cat;
	//AAnimal*	AbsAnimal = new AAnimal;

	AbsCat->makeSound();
	delete AbsCat;
	return 0;
}