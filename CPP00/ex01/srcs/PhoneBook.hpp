/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:52:38 by daalmeid          #+#    #+#             */
/*   Updated: 2022/05/17 14:40:38 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"


class	PhoneBook {
	
	public:
	
		PhoneBook(void);
		~PhoneBook(void);

		void	search(void) const;
		void	add(void);

	private:
		int		max_index;
		int		index;
		Contact	list[8];
		void	search_print(std::string s) const;

};

#endif