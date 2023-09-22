/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:25:46 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/22 18:48:25 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void	easyfind( T &container,int x)
{
	if (std::find(container.begin(), container.end(), x) != container.end())
		std::cout << "\033[32m" << "Found" << "\033[0m" <<std::endl;
	else
		std::cerr << "\033[31m" << "Not Found" << "\033[0m" << std::endl;
}

#endif
