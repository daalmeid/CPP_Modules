/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:51:10 by marvin            #+#    #+#             */
/*   Updated: 2022/06/08 12:51:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	
	_matChest[0] = NULL;
	_matChest[1] = NULL;
	_matChest[2] = NULL;
	_matChest[3] = NULL;
	//std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void) {

	//std::cout << "MateriaSource destructor called" << std::endl;
	
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_matChest[i] != NULL)
			delete this->_matChest[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & m) {

	_matChest[0] = NULL;
	_matChest[1] = NULL;
	_matChest[2] = NULL;
	_matChest[3] = NULL;
	*this = m;
	//std::cout << "MateriaSource copy constructor called" << std::endl;

}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs) {

	for (size_t i = 0; i < 4; i++)
	{
		if (this->_matChest[i] != NULL)
		{
			delete this->_matChest[i];
			this->_matChest[i] = NULL;
		}
		if (rhs._matChest[i] != NULL)
			this->_matChest[i] = rhs._matChest[i]->clone();
	}
	return *this;
}

void 	MateriaSource::learnMateria(AMateria* m) {

	for (size_t i = 0; i < 4 && m != NULL; i++)
	{
		if (this->_matChest[i] == NULL)
		{
			this->_matChest[i] = m;
			std::cout << "New materia recipe learned: " << m->getType() << '!' << std::endl;
			break ;
		}
		if (i == 3)
		{
			std::cout << "No slots available for learning materia" << std::endl;
			delete m;
		}	
	}
	if (m == NULL)
		std::cout << "Invalid materia cannot be learned" << std::endl;

}

AMateria* MateriaSource::createMateria(std::string const & type) {

	AMateria*	cloneMat = 0;
	
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_matChest[i]->getType() == type)
		{
			cloneMat = this->_matChest[i]->clone();
			break ;
		}
		if (i == 3)
			std::cout << "This type does not exist / was not learned" << std::endl;
	}
	return cloneMat;
}