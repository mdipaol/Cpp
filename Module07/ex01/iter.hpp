/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:21:00 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/20 19:57:46 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename U>

void	iter(T *arr, size_t len, void (*func)(U)){
	if(!arr)
	{
		std::cerr << "Error" << std::endl;
		return;
	}
	else
	{
		for (size_t i = 0; i < len; i++)
			func(arr[i]);
	}
}
