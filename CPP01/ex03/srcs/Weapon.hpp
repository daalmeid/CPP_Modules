
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	Weapon {

	public:

		Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void) const;
		void		setType(std::string newType);

	private:

		std::string	_type;

};

#endif