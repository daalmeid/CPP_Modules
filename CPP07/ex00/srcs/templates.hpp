/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:40:42 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 19:13:10 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T >
T const &	max(T const & lft, T const & rgt) {

	return (lft > rgt? lft : rgt);
}

template <typename T >
T const &	min(T const & lft, T const & rgt) {

	return (lft < rgt? lft : rgt);
}

template <typename T >
void	swap(T& lft, T& rgt) {

	T tmp = lft;
	
	lft = rgt;
	rgt = tmp;
}

#endif