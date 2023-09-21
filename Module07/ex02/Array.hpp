/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:54:21 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/21 18:32:27 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array
{
private:
	T	*_array;
public:
	Array() : _array(NULL){};
	Array(unsigned int n);
	Array(Array const &obj);
	Array	&operator=(Array const &obj);

	Array &operator[](int index);
	size()
	~Array();
};

