/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:04:30 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 18:04:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const name): _name(name) {
	
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	//std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const & c, std::string const name): _name(name) {

	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	*this = c;
}

Character::Character(void) {

	//std::cout << "Default Character constructor called" << std::endl;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

Character::~Character(void) {

	//std::cout << "Character destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character& Character::operator=(Character const & rhs) {

	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (rhs._inventory[i] != NULL)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const {

	return this->_name;
}

void Character::equip(AMateria* m) {

	if (m == 0)
	{
		std::cout << "Cannot equip non-exitent materia!" << std::endl;
		return ;
	}	
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Inventory full!" << std::endl;
}

void Character::unequip(int idx) {

	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
		this->_inventory[idx] = NULL;
	else if (idx < 0 || idx > 3)
		std::cout << "Invalid index to unequip materia" << std::endl;
	else
		std::cout << "Empty slot!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {

	if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "Invalid index for use() function" << std::endl;
}