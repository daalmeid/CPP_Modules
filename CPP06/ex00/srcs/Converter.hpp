/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:17:50 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/20 17:17:51 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <iomanip>

class	Converter {

	public:

		Converter(void);
		~Converter(void);

		void	convSelector(std::string strVal);

	private:

		Converter(Converter const& src);
		Converter&	operator=(Converter const& rhs);

		bool	parser(std::string strVal);
		void	charConvert(char val);
		void	intConvert(int val);
		void	floatConvert(float val);
		void	doubleConvert(double val);
		void	edgeCases(std::string strVal);

};

#endif