/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:17:52 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/06 16:28:16 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal {

	public:

		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(AAnimal const& src);
		AAnimal&	operator=(AAnimal const& rhs);
		std::string	getType(void) const;

		virtual void    makeSound(void) const = 0;

	protected:

		std::string	_type;

};

#endif