/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:17:00 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 15:04:59 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dynamic.h"

int	main(void) {
	
	Base*	test = generate();
	Base&	refTest = *test;

	identify(test);
	identify(refTest);
	delete test;
	return 0;
}