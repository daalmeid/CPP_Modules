/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:26:32 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 19:20:02 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "templates.hpp"

// int	main(void) {

// 	int a = 42;
// 	int b = 24;

// 	std::cout << "a: " << a << " b: " << b << std::endl;
// 	std::cout << "min: " << min<int>(a, b) << std::endl;
// 	std::cout << "max: " << max<int>(a, b) << std::endl;
// 	std::cout << "swap: ";
// 	swap<int>(a, b);
// 	std::cout << "a: " << a << " b: " << b << std::endl << std::endl;
	
// 	float c = 42.254;
// 	float d = 24.23;

// 	std::cout << "c: " << c << " d: " << d << std::endl;
// 	std::cout << "min: " << min<float>(c, d) << std::endl;
// 	std::cout << "max: " << max<float>(c, d) << std::endl;
// 	std::cout << "swap: ";
// 	swap<float>(c, d);
// 	std::cout << "c: " << c << " d: " << d << std::endl << std::endl;
	
// 	char e = 'a';
// 	char f = 'z';

// 	std::cout << "e: " << e << " f: " << f << std::endl;
// 	std::cout << "min: " << min<char>(e, f) << std::endl;
// 	std::cout << "max: " << max<char>(e, f) << std::endl;
// 	std::cout << "swap: ";
// 	swap<char>(e, f);
// 	std::cout << "e: " << e << " f: " << f << std::endl;
// 	return 0;
// }

int main( void ) {

int a = 2;
int b = 3;

::swap( a, b );

std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";

::swap(c, d);

std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}