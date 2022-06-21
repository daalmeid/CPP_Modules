/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:17:27 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 12:17:28 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

Data::Data(void) {

}

Data::Data(std::string question): _question(question) {

}

Data::~Data(void) {

}

Data::Data(Data const& src) {

	*this = src;
	return ;
}

Data&	Data::operator=(Data const& rhs) {

	if (this != &rhs)
		this->_question = rhs.getQuestion();

	return *this;
}

std::string	Data::getQuestion(void) const {

	return this->_question;
}

uintptr_t	Data::serialize(Data* ptr) {

	uintptr_t	newType;

	newType = reinterpret_cast<uintptr_t>(ptr);
	return newType;
}

Data*	Data::deserialize(uintptr_t raw) {

	return reinterpret_cast<Data *>(raw);
}

