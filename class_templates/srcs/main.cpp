/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:32:01 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/03 11:09:23 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	toUpper(std::ostream &hppFile,  std::string str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			hppFile << (char) (str[i] - 32) ;
		else
			hppFile << str[i];
		i++;
	}
}

int	main(void)
{
	std::string	name;
	std::string	str;

	std::cout << "Class creator. Enter class name: ";
	std::getline(std::cin, name);
	std::ofstream	hppFile(name + ".hpp");
	std::ofstream	cppFile(name + ".cpp");
	hppFile << std::endl << "#ifndef ";
	toUpper(hppFile, name);
	hppFile << "_HPP" << std::endl;
	hppFile << "# define ";
	toUpper(hppFile, name);
	hppFile << "_HPP" << std::endl << std::endl;
	
	std::cout << "Headers (with "" or <>). Press ENTER to ignore or finish: " << std::endl;
	std::getline(std::cin, str);
	while (str != "")
	{
		hppFile << "# include " << str << std::endl;
		std::getline(std::cin, str);
	}
	hppFile << std::endl << "class	" + name;
	std::cout << "Any inheritances? Press ENTER to ignore or write desired parent classes: " << std::endl;
	std::getline(std::cin, str);
	if (str != "")
		hppFile << ": " << str << "	";
	hppFile << " {" << std::endl << std::endl;
	hppFile << "	public:" << std::endl << std::endl;
	
	std::cout << "Constructor initializes values? Press ENTER if no or enter them, separated by commas:" << std::endl;
	std::getline(std::cin, str);
	if (str == "")
		str = "void";
	hppFile << "		" + name + "(" + str + ");" << std::endl;
	hppFile << "		~" + name + "(void);" << std::endl;
	hppFile << "		" + name + '(' + name + " const& src);" << std::endl;
	hppFile << "		" + name + "&	operator=(" + name + " const& rhs);" << std::endl;
	hppFile << "		int	getI(void) const;" << std::endl << std::endl;
	
	cppFile << std::endl << "#include \"" + name + ".hpp\"" << std::endl << std::endl;
	cppFile << name + "::" + name + "(" + str + ")" + " {" << std::endl << std::endl << "}" << std::endl << std::endl;
	cppFile << name + "::~" + name + "(void)" + " {" << std::endl << std::endl << "}" << std::endl << std::endl;
	cppFile << name + "::" + name + '(' + name + " const& src)" + " {" << std::endl << std::endl
		<< "	*this = src;" << std::endl << "	return ;" << std::endl << "}" << std::endl << std::endl;
	cppFile << name + "&	" + name + "::" + "operator=(" + name + " const& rhs)" + " {"
		<< std::endl << std::endl << "	if (this != &rhs)" << std::endl << "		this->_i = rhs.getI();"
		<< std::endl << std::endl << "	return *this;" << std::endl << "}" << std::endl << std::endl;
	cppFile << "int	" + name + "::getI(void) const" + " {" << std::endl << std::endl
		<< "	return this->_i;" << std::endl << "}" << std::endl << std::endl;
	
	std::cout << "public:" << std::endl;
	std::getline(std::cin, str);
	while (str != "")
	{
		hppFile << "		" << str + ';' << std::endl;
		if (str.find_first_of("()") != (size_t) -1)
		{
			size_t i = 0;
			while (str[i] != ' ' && str[i] != 9)
				cppFile << str[i++];
			cppFile << "	" + name + "::" + str.substr(++i, 100) + " {" << std::endl << std::endl << "}" << std::endl << std::endl;
		}
		std::getline(std::cin, str);
	}
	hppFile << std::endl << "	private:" << std::endl << std::endl;
	hppFile << "		int	_i;" << std::endl;
	std::cout << "private:" << std::endl;
	std::getline(std::cin, str);
	while (str != "")
	{
		hppFile << "		" << str + ';' << std::endl;
		if (str.find_first_of("()") != (size_t) -1)
		{
			size_t i = 0;
			while (str[i] != ' ' && str[i] != 9)
				cppFile << str[i++];
			cppFile << "	" + name + "::" + str.substr(++i, 100) + " {" << std::endl << std::endl << "}" << std::endl << std::endl;
		}
		std::getline(std::cin, str);
	}
	hppFile << std::endl << "};" << std::endl << std::endl << "#endif";
	hppFile.close();
	cppFile.close();
	return 0;
}