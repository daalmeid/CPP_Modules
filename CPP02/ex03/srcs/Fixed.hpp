/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:28:27 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/26 17:28:28 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed {

	public:

		Fixed(void);
		Fixed(int const intNum);
		Fixed(float const floatNum);
		~Fixed(void);
		Fixed(Fixed const& src);

		Fixed&	operator=(Fixed const& rhs);
		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;

		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& one, Fixed& two);
		static Fixed&	min(Fixed const& one, Fixed const& two);
		static Fixed&	max(Fixed& one, Fixed& two);
		static Fixed&	max(Fixed const& one, Fixed const& two);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int					_fixPtNum;
		static int const	_fractBits;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif