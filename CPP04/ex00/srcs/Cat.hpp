/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:28 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 12:32:59 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal	 {

	public:

		Cat(void);
		~Cat(void);
		Cat(Cat const& src);
		Cat&	operator=(Cat const& rhs);

		virtual void    makeSound(void) const;

	private:

};

#endif