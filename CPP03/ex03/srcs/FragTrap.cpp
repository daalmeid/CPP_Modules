/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:39:51 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/13 15:29:52 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {

	std::cout << "Default FragTrap constructor called." << std::endl;
	this->_HP = 100;
	this->_atkDmg = 30;
	return ;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name) {

	std::cout << "Constructor of FragTrap " << name << " called." << std::endl;
	this->_HP = 100;
	this->_EP = 100;
	this->_atkDmg = 30;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap destructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const& src): ClapTrap(src) {

	*this = src;
	return ;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs) {

	this->_atkDmg = rhs._atkDmg;
	this->_EP = rhs._EP;
	this->_HP = rhs._HP;
	return *this;
}

void FragTrap::highFivesGuys(void) const {

	if (this->_EP > 0 && this->_HP > 0)
	{
		std::cout << "FragTrap " << this->_name << " says: \"Awesome work guys, HIGH FIVE!\"" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " cannot move, no high fives for anyone!" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string& target) {

	if (this->_EP > 0 && this->_HP > 0)
	{
		this->_EP--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage, much more than regular ClapTrap!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " tried to attack but cannot move!" << std::endl;
		return ;
}

int	FragTrap::getHP(void) const {

	return this->_HP;
}

int	FragTrap::getAtkDmg(void) const {

	return this->_atkDmg;
}
