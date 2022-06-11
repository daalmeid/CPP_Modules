/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:12:36 by marvin            #+#    #+#             */
/*   Updated: 2022/06/07 13:12:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>

class ICharacter;
class AMateria
{
	protected:

	std::string const _type;
	AMateria(void);

	public:

	AMateria(std::string const & type);
	virtual ~AMateria(void);
	AMateria(AMateria const & m);
	AMateria& operator=(AMateria const & rhs);
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif