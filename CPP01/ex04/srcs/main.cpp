/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:47:09 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/23 16:04:14 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replacer(std::ifstream& oldfile, std::ofstream& newfile, char **argv) {

	std::string	str;
	std::string	srcfile(argv[1]);
	std::string	oldstr(argv[2]);
	std::string	newstr(argv[3]);
	
	std::getline(oldfile, str, '\0');
	size_t	pos = 0;
	size_t	foundIndex = str.find(oldstr, pos);
	
	while (foundIndex != -1 && oldstr != "")
	{
		newfile << str.substr(pos, foundIndex - pos);
		newfile << newstr;
		pos = foundIndex + oldstr.length();
		foundIndex = str.find(oldstr, pos);
	}
	newfile << str.substr(pos);
	newfile << std::endl;
	oldfile.close();
	newfile.close();
}

int	main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cout << "Wrong input arguments, should be: ./HomemadeSed <file> <string to replace> <replacing string>" << std::endl;
		return -1;
	}
	
	std::string		srcfile(argv[1]);
	std::ifstream	oldfile(argv[1]);
	
	if (oldfile.is_open() == false)
	{
		std::cout << "File could not be opened" << std::endl;
		return -1;
	}
	
	std::ofstream	newfile(srcfile + ".replace");
	
	if (newfile.is_open() == false)
	{
		oldfile.close();
		std::cout << "Replace file could not be opened" << std::endl;
		return -1;
	}
	replacer(oldfile, newfile, argv);
	return 0;
}