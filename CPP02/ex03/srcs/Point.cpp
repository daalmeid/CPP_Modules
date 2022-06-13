/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:27:51 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 11:06:21 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {

}

Point::Point(float const x, float const y): _x(x), _y(y) {

}

Point::~Point(void) {

}

Point::Point(Point const& src): _x(src.getX()), _y(src.getY()) {

	return ;
}

Point&	Point::operator=(Point const& rhs) {

	(void)rhs;
	std::cerr << "Cannot assign to const values, object keeps original values." << std::endl;
	return *this;
}

Fixed	Point::getX(void) const {

	return this->_x;
}

Fixed	Point::getY(void) const {

	return this->_y;
}

