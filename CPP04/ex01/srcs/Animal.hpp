/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:17:52 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 11:47:11 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal {

	public:

		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const& src);
		Animal&	operator=(Animal const& rhs);
		std::string	getType(void) const;

		virtual void    makeSound(void) const;

	protected:

		std::string	_type;

};

#endif