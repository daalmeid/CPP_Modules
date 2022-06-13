/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:28:32 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/27 15:21:01 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class	Point {

	public:

		Point(void);
		Point(float const x, float const y);
		~Point(void);
		Point(Point const& src);
		Point&	operator=(Point const& rhs);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:

		Fixed const	_x;
		Fixed const	_y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif