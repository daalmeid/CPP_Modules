/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:50:34 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 14:54:45 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.h"
#include <time.h>
#include <cstdlib>

Base*	generate(void) {

	enum	Casts{
		
		objA,
		objB,
		objC
	};

	Base* randObj;

	srand(time(NULL));
	int	i = rand() % 3;
	switch (i)
	{
	case objA:
		randObj = new A;
		std::cout << "Object type A created." << std::endl;
		break ;
	case objB:
		randObj = new B;
		std::cout << "Object type B created." << std::endl;
		break ;
	case objC:
		randObj = new C;
		std::cout << "Object type C created." << std::endl;
		break ;
	};
	return randObj;
}