/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:40:12 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/14 16:43:21 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void swap(T &a, T &b){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(T const &a, T const &b){
	if(a == b)
		return(b);
	return(a>=b ? a : b);
}

template <typename T>
T min(T const &a, T const &b){
	if(a == b)
		return(b);
	return(a<=b ? a : b);
}
