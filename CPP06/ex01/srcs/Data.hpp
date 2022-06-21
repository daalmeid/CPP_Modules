/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:17:24 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 12:17:25 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class	Data {

	public:

		Data(std::string question);
		~Data(void);
		Data(Data const& src);
		Data&	operator=(Data const& rhs);
		std::string	getQuestion(void) const;

		uintptr_t	serialize(Data* ptr);
		Data*	deserialize(uintptr_t raw);

	private:

		Data(void);
		std::string	_question;

};

#endif