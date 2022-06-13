/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:32:51 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/02 15:10:37 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


static Fixed	get_lineb(Point const a, Point const b) {
	
	Fixed	lineB;

	lineB = ((b.getY() - a.getY()) * b.getX() + ((b.getX() - a.getX()) * b.getY()) * Fixed(-1))
		/ ((b.getX() - a.getX()) * Fixed(-1));
	return lineB;
}

bool	bsp(Point const a, Point const b, Point const c,  Point const point) {
	
	static int	depth = 0;
	Fixed		lineDerivC;
	Fixed		lineDerivTestPoint;
	Fixed		lineB(get_lineb(a, b));

	lineDerivC = (b.getY() - a.getY()) * c.getX() + ((b.getX() - a.getX())
			* c.getY() * Fixed(-1)) + (b.getX() - a.getX()) * lineB;
	lineDerivTestPoint = (b.getY() - a.getY()) * point.getX() + ((b.getX() - a.getX())
			* point.getY() * Fixed(-1)) + (b.getX() - a.getX()) * lineB; 
	std::cout << "c: " << lineDerivC << "; point: " << lineDerivTestPoint << std::endl;
	if ((lineDerivC < 0  && lineDerivTestPoint < 0) || (lineDerivC > 0  && lineDerivTestPoint > 0))
	{
		depth++;
		if (depth - 1 == 0)
			return (bsp(b, c, a, point));
		else if (depth - 1 == 1)
			return (bsp(c, b, a, point));
		else if (depth - 1 == 2)
		{
			depth = 0;
			return true;
		}
	}
	depth = 0;
	return false;
}
