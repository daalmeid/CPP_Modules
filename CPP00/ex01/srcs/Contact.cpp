/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:54:41 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/17 14:29:25 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) {
	
	return;
}

Contact::~Contact(void) {

	return;
}

std::string	Contact::getFirstName(void) const {

	return this->_first_name;
}

void		Contact::setFirstName(std::string str) {

	this->_first_name = str;
	return;
}

std::string	Contact::getLastName(void) const {

	return this->_last_name;
}

void		Contact::setLastName(std::string str) {

	this->_last_name = str;
	return;
}

std::string	Contact::getNickname(void) const {

	return this->_nickname;
}

void		Contact::setNickname(std::string str) {

	this->_nickname = str;
	return;
}

std::string	Contact::getPhoneNb(void) const {

	return this->_phone_nb;
}

void		Contact::setPhoneNb(std::string str) {

	this->_phone_nb = str;
	return;
}

std::string	Contact::getDarkSecret(void) const {

	return this->_dark_secret;
}

void		Contact::setDarkSecret(std::string str) {

	this->_dark_secret = str;
	return;
}
