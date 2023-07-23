/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:43:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 19:08:57 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string stack_name;
	std::string heap_name;

	std::cout << "\033[1;42mINSERT STACK ZOMBIE NAME\033[0m" << std::endl;
	std::getline(std::cin, stack_name);
	while (stack_name.empty())
	{
		std::cout << "\033[1;41mPLEASE INSERT A CORRECT NAME\033[0m" << std::endl;
		std::getline(std::cin, stack_name);
	}
	std::cout << "\033[1;42mINSERT HEAP ZOMBIE NAME\033[0m" << std::endl;
	std::getline(std::cin, heap_name);
	while (heap_name.empty())
	{
		std::cout << "\033[1;41mPLEASE INSERT A CORRECT NAME\033[0m" << std::endl;
		std::getline(std::cin, heap_name);
	}
	Zombie *z = newZombie(heap_name);
	z->announce();
	randomChump(stack_name);
	delete z;
}
