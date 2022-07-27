/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:40:42 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/22 17:09:15 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>
# include <stdexcept>

template <typename T >
class Array {
	
	public:
		
		Array(void): _size(0) { 
		
			this->_arr = new T[0];
		};
		
		Array(unsigned int n): _size(n) {
			
			this->_arr = new T[n];
		};

		Array(Array const& cp): _size(cp._size) {
			
			this->_arr = new T[_size];
			*this = cp;
		};

		~Array(void) { delete[] _arr; };
		T&	operator[](unsigned int const index){ 
			
			if (index >= this->_size) 
				throw std::exception(); 
			 return this->_arr[index]; 
		};

		size_t	size(void) const { return this->_size; };
		
	private:
		
		Array&	operator=(Array const& rhs) {
			
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = rhs._arr[i]; 
			return *this;
		};
		
		T*					_arr;
		unsigned int const	_size;
};


#endif
