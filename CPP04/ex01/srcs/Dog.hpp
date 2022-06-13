/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:30:50 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 15:49:47 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal	 {

	public:

		Dog(void);
		~Dog(void);
		Dog(Dog const& src);
		Dog&	operator=(Dog const& rhs);

		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
		virtual void	makeSound(void) const;

	private:

		Brain*	dogBrain;
};

#endif