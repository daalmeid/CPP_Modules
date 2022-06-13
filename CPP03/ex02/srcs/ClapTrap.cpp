/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:25:48 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 14:32:40 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default") {

	std::cout << "Default ClapTrap constructor called." << std::endl;
	return ;
}


ClapTrap::ClapTrap( const std::string& name): _name(name) {

	std::cout << "Constructor of ClapTrap " << name << " called." << std::endl;
	this->_HP = 10;
	this->_EP = 10;
	this->_atkDmg = 0;
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap destructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& src): _name(src.getName()) {

	*this = src;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs) {

	this->_atkDmg = rhs._atkDmg;
	this->_EP = rhs._EP;
	this->_HP = rhs._HP;
	return *this;
}

std::string	ClapTrap::getName(void) const {

	return this->_name;
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_EP > 0 && this->_HP > 0)
	{
		this->_EP--;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage!" << std::endl;
	}
	else
		std::cout << this->_name << " tried to attack but cannot move!" << std::endl;
		return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_HP == 0)
		std::cout << this->_name << " is already dead!" << std::endl;
	else
	{
		this->_HP -= amount;
		std::cout << this->_name << " was hit, loosing " << amount << " health points!" << std::endl;
		if (this->_HP <= 0)
		{
			std::cout << this->_name << " is dead!" << std::endl;
			this->_HP = 0;
		}
	}
}

void	ClapTrap:: beRepaired(unsigned int amount) {

	if (this->_EP > 0 && this->_HP > 0)
	{
		this->_HP += amount;
		this->_EP--;
		std::cout << this->_name << " repaired itself, regaining " << amount << " of health points!" << std::endl;
	}
	else
		std::cout << this->_name << " tried to repair itself but cannot move!" << std::endl;
}

void	 ClapTrap::clapTrapStat(void) const {

	std::cout << this->_name << " status:" << std::endl << std::endl;
	std::cout<< "Energy: " << this->_EP << std::endl;
	std::cout<< "Health: " << this->_HP << std::endl << std::endl;
	return ;
}
