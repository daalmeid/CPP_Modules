/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:40:20 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 14:40:20 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed {

	public:

		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const& src);
		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int					_fixPtNum;
		static const int	_fractBits;

};

#endif