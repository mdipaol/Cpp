/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:25:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/22 18:49:46 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int x = 0;
	int y = 0;
	int i = 0;
	std::vector<int> v;

	std::cout << "\033[34m" << "Enter 3 numbers:" << "\033[0m" << std::endl;
	while(i < 3)
	{
		std::cin >> x;
		v.push_back(x);
		i++;
	}
	std::cout << "\033[34m" << "Enter the number you want to find in the container:" << "\033[0m" << std::endl;
	std::cin >> y;
	::easyfind(v, y);
}
