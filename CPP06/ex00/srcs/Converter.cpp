/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:17:47 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 11:21:02 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Converter.hpp"

Converter::Converter(void) {

}

Converter::~Converter(void) {

}

Converter::Converter(Converter const& src) {

	(void)src;
}

Converter&	Converter::operator=(Converter const& rhs) {

	(void)rhs;
	return *this;
}

void	Converter::convSelector(std::string strVal) {

	if (strVal == "-inf" || strVal == "+inf" || strVal == "-inff" || strVal == "+inff" || strVal == "nan" || strVal == "nanf")
	{
		this->edgeCases(strVal);
		return ;
	}

	std::stringstream s;
	if (parser(strVal) == false)
		return ;
	else if (strVal.length() == 1 && strVal.find_first_not_of("0123456789") != strVal.npos)
		charConvert(strVal[0]);
	else if (strVal.back() == 'f')
	{
		float result;
		strVal.erase(strVal.length() - 1);
		s << strVal;
		s >> result;
		floatConvert(result);
	}
	else if (strVal.find_first_of('.') != strVal.npos
			|| strtod(strVal.c_str(), NULL) > std::numeric_limits<int>::max()
			|| strtod(strVal.c_str(), NULL) < std::numeric_limits<int>::min())
	{
		double result;
		s << strVal;
		s >> result;
		doubleConvert(result);
	}
	else
	{
		int result;
		s << strVal;
		s >> result;
		intConvert(result);
	}
}

bool	Converter::parser(std::string strVal) {

	if (strVal.find_first_of("0123456789+-") == 0 && strVal.find_first_not_of("0123456789+-f.") == strVal.npos)
	{
		if (strVal.find_first_of('f') != strVal.npos
			&& (strVal.find_first_of('f') != strVal.length() - 1
			|| (strVal.find_first_of('f') == strVal.length() - 1 && strVal.find_first_of('.') == strVal.npos)))
		{
			std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
			return false;
		}
		else if (strVal.find_last_of("-+") != 0 && strVal.find_last_of("-+") != strVal.npos)
		{
			std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
			return false;	
		}
		else if (strVal.find_first_of('.') == 0
				|| strVal.find_last_of('.') == strVal.length() - 1
				|| strVal.find_first_of('.') != strVal.find_last_of('.')
				|| (strVal.find_last_of("-+") == 0 && strVal.find_first_of('.') == 1)
				|| (strVal.find_first_of('f') == strVal.length() - 1 && strVal.find_last_of('.') == strVal.length() - 2))
		{
			std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
			return false;	
		}
	}
	else if (strVal[1] != '\0')
	{
		std::cout << "\033[31mWrong use: input can only be char, int, float or double." << std::endl;
		return false;
	}
	return true;
}

void	Converter::charConvert(char val) {

	std::cout << "char: \'" << val << '\'' << std::endl;
	std::cout << "int: " << static_cast<int>(val) << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void	Converter::intConvert(int val) {

	std::cout << "char: ";
	if ((val >= 0 && val < 32 )|| val == 127)
		std::cout << "non displayable" << std::endl;
	else if (val > std::numeric_limits<char>::max() || val < 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(val) << '\'' << std::endl;
	std::cout << "int: " << val << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void	Converter::floatConvert(float val) {

	std::cout << "char: ";
	if ((val >= 0 && val < 32) || val == 127)
		std::cout << "non displayable" << std::endl;
	else if (val > std::numeric_limits<char>::max() || val < 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(val) << '\'' << std::endl;
	std::cout << "int: ";
	if (val > std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float: " << val << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void	Converter::doubleConvert(double val) {

	std::cout << "char: ";
	if ((val >= 0 && val < 32) || val == 127)
		std::cout << "non displayable" << std::endl;
	else if (val > std::numeric_limits<char>::max() || val < 0)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << '\'' << static_cast<char>(val) << '\'' << std::endl;
	std::cout << "int: ";
	if (val > std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float: ";
	if (val > std::numeric_limits<float>::max() || val < std::numeric_limits<float>::lowest())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(val) << 'f' << std::endl;
	std::cout << "double: " << val << std::endl;
}

void	Converter::edgeCases(std::string strVal) {

	if (strVal == "-inf" || strVal == "+inf" || strVal == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << strVal << "f" << std::endl;
		std::cout << "double: " << strVal << std::endl;
	}
	else if (strVal == "-inff" || strVal == "+inff" || strVal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << strVal << std::endl;
		strVal.erase(strVal.length() - 1);
		std::cout << "double: " << strVal << std::endl;
	}
}