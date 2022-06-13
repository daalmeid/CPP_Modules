/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:28 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 15:07:19 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal	 {

	public:

		Cat(void);
		~Cat(void);
		Cat(Cat const& src);
		Cat&	operator=(Cat const& rhs);
		
		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
		virtual void    makeSound(void) const;

	private:

		Brain*	catBrain;

};

#endif