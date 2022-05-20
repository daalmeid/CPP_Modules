
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {

	return ;
}

HumanB::~HumanB(void) {

	return ;
}

void	HumanB::attack(void) const {

	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon, their fists are enough" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	
	return;
}

void	HumanB::setWeapon(Weapon& newWeapon) {

	this->_weapon = &newWeapon;
}
