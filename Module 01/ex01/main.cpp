/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:06:30 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 19:51:54 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool	isdigit(std::string number)
{
	for (int i = 0; number[i]; i++)
		if (number[i] < '0' || number[i] > '9')
			return(false);
	return(true);
}


int	main()
{
	std::string input_number;
	std::string input_name;
	int	n = 0;

	std::cout << "\033[1;42mINSERT N ZOMBIE HORDE\033[0m" << std::endl;
	std::getline(std::cin, input_number);
	while (input_number.empty() || !isdigit(input_number))
	{
		std::cout << "\033[1;41mPLEASE INSERT A CORRECT NUMBER\033[0m" << std::endl;
		std::getline(std::cin, input_number);
	}
	n = atoi(input_number.c_str());
	std::cout << "\033[1;42mINSERT NAME ZOMBIE HORDE\033[0m" << std::endl;
	std::getline(std::cin, input_name);
	while (input_name.empty())
	{
		std::cout << "\033[1;41mPLEASE INSERT A CORRECT NAME\033[0m" << std::endl;
		std::getline(std::cin, input_name);
	}
	Zombie *h = zombieHorde(n, input_name);
	for(int i = 0; i < n; i++)
		h[i].announce();
	delete [] h;
}
