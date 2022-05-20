/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:52:38 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/17 14:25:27 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact {
	
	public:
	
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		void		setFirstName(std::string str);
		std::string	getLastName(void) const;
		void		setLastName(std::string str);
		std::string	getNickname(void) const;
		void		setNickname(std::string str);
		std::string	getPhoneNb(void) const;
		void		setPhoneNb(std::string str);
		std::string getDarkSecret(void) const;
		void		setDarkSecret(std::string str);
		
	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_nb;
		std::string	_dark_secret;

};

#endif