/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:54:21 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/05 10:51:28 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>
class Array
{
private:
	T	*_array;
	int _size;
public:
	Array() : _array(new T[0]), _size(0) {};
	Array(unsigned int n) : _array(new T[n]), _size(n) {};
	Array(Array const &obj) : _array(new T[obj._size]), _size(obj._size){
			for (int i = 0; i < obj._size; i++)
				this->_array[i] = obj._array[i];
	}

	~Array(){ delete[] this->_array;};

	Array	&operator=(Array const &obj) {
		if (this != &obj){
			delete[] this->_array;
			this->_array = new T[obj._size];
			for (int i = 0; i < obj._size; i++){
				this->_array[i] = obj._array[i];
			}
			this->_size = obj._size;
		}
		return *this;
	};
	T &operator[](int index) {
		if (index >= this->_size || index < 0)
			throw std::out_of_range("\033[1;31mOut of bounds\033[0m");
		return this->_array[index];
	};
	int size(){ return this->_size;};
};

