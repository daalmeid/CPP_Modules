/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:54:41 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/18 15:56:32 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Class.hpp"

Class::Class(void) {
	
	std::cout << "constructor called" << std::endl;
	return;
}

Class::~Class(void) {

	std::cout << "destructor called" << std::endl;
	return;
}
