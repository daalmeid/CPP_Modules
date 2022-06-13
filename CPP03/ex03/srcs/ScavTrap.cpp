/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:51 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/13 15:34:09 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {

	this->_EP = 50;
	std::cout << "Default ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {

	std::cout << "Constructor of ScavTrap " << name << " called." << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_atkDmg = 20;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap destructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src) {

	*this = src;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {

	this->_atkDmg = rhs._atkDmg;
	this->_EP = rhs._EP;
	this->_HP = rhs._HP;
	return *this;
}

void	ScavTrap::guardGate(void) const {

	if (this->_EP > 0 && this->_HP > 0)
	{
		std::cout << "ScavTrap " << this->_name << " is in Gatekeeper mode!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is unable to move, Gatekeeper mode unavailable!" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target) {

	if (this->_EP > 0 && this->_HP > 0)
	{
		this->_EP--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage, much more than regular ClapTrap!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " tried to attack but cannot move!" << std::endl;
		return ;
}

int		ScavTrap::getEP(void) const {

	return this->_EP;
}
