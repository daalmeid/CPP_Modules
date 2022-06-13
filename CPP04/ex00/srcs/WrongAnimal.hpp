/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:17:52 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:28:58 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal {

	public:

		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(WrongAnimal const& src);
		WrongAnimal&	operator=(WrongAnimal const& rhs);
		std::string	getType(void) const;

		void    makeSound(void) const;

	protected:

		std::string	_type;

};

#endif