/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:33:55 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/13 17:14:31 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal	 {

	public:

		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const& src);
		WrongCat&	operator=(WrongCat const& rhs);

		void    makeSound(void) const;

};

#endif