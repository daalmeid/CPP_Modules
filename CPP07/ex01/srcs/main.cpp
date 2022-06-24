/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:36 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/22 11:42:24 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Bureaucrat.hpp"

void	print10x(int num) {

	std::cout << num * 10 << std::endl;
}

void	printCap(char c) {

	std::cout << static_cast<char>(c - ('a' - 'A')) << std::endl;
}

void	printInfoBur(Bureaucrat b) {

	std::cout << "Name: " << b.getName() << ", grade: " << b.getGrade() << std::endl;
}

int	main(void) {

	int	arr[] = {1,2,3,4,5,6,7,8,9};

	iter<int>(arr, 9, print10x);
	
	std::cout << std::endl << std::endl;

	char	arr2[] = {'a','d','r','s','t','f','l'};

	iter<char>(arr2, 7, printCap);
	
	std::cout << std::endl << std::endl;
	
	Bureaucrat arr3[] = {Bureaucrat("Phil", 12),Bureaucrat("John", 120),Bureaucrat("Max", 50),Bureaucrat("Marcus", 77)};

	iter<Bureaucrat>(arr3, 4, printInfoBur);

	return 0;
}