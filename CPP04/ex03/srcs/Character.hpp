/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:07:25 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:07:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Ice.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
	
	Character(std::string const name);
	Character(Character const & c, std::string const name);
	~Character();
	Character& operator=(Character const & rhs);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	private:

	Character(void);
	std::string const	_name;
	AMateria*	_inventory[4];
};

#endif