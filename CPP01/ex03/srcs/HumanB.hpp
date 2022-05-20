
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"


class	HumanB {

	public:

		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon& newWeapon);

	private:

		std::string const	_name;
		Weapon*				_weapon;

};

#endif