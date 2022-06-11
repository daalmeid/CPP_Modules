/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:42:27 by marvin            #+#    #+#             */
/*   Updated: 2022/06/08 12:42:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:

	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource const & m);
	MateriaSource& operator=(MateriaSource const & rhs);

	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);

	private:

	AMateria*	_matChest[4];

};

#endif