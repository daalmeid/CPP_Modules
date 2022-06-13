/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:28 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 16:42:31 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat: public AAnimal	 {

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