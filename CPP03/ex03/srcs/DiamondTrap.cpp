/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:51 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 14:31:38 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ScavTrap(), FragTrap() {

	std::cout << "Default DiamondTrap constructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {

	std::cout << "Constructor of DiamondTrap " << this->_name << " called." << std::endl;
	this->_HP = FragTrap::getHP();
	this->_EP = ScavTrap::getEP();
	this->_atkDmg = FragTrap::getAtkDmg();
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap destructor called." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src): ScavTrap(src), FragTrap(src) {

	*this = src;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs) {

	this->_atkDmg = rhs._atkDmg;
	this->_EP = rhs._EP;
	this->_HP = rhs._HP;
	return *this;
}

void	DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
	return ;
}

void DiamondTrap::whoAmI(void) const {

	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
	return ;
}
