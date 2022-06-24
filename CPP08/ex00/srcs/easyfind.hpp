/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:40:42 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/23 17:24:08 by daalmeid         ###   ########.fr       */
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
typename T::iterator	firstOcFinder(T & ct, int num) {

	typename T::iterator index = std::find(ct.begin(), ct.end(), num);
	if (index != ct.end())
		return (index);
	throw std::exception();
}
#endif