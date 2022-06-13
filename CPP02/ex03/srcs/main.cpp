/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:29:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/31 14:44:28 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) {

	Point	a(1, 1);
	Point	b(1, 5);
	Point	c(5, 3);
	Point	point(1.0f, 2.0f);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	d(4.2f, 2.25f);
	d = point;
	if (bsp(a, b, c, d) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	Point	newPoint(-157.5f, -200.5f);
	if (bsp(a, b, c, newPoint) == true)
		std::cout << "The point belongs to the triangle" << std::endl;
	else
		std::cout << "The point is OUT!" << std::endl;
	return 0;
}

