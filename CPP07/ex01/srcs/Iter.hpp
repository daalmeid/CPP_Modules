/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:40:42 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/22 11:42:18 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T >
void	iter(T const arr[], size_t len, void (*f)(T)) {

	for (size_t i = 0; i < len; i++) {

		f(arr[i]);
	}
}

#endif