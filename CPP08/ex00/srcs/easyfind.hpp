/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:40:42 by daalmeid          #+#    #+#             */
/*   Updated: 2022/07/05 15:35:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>
# include <list>

template <typename T >
typename T::iterator	easyFind(T & ct, int num) {

	typename T::iterator index = std::find(ct.begin(), ct.end(), num);
	if (index != ct.end())
		return (index);
	throw std::exception();
}
#endif