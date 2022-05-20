/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:10 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/20 11:08:09 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << "Dummy constructor called" << std::endl;
	return ;
}

Zombie::Zombie(std::string name): _name(name) {
	
	std::cout << "Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Zombie::announce( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

