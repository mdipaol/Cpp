/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:05:40 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 17:20:33 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	std::string	input;
	Harl		Harl;

	std::cout << "\033[1;32mINSERT COMMAND\033[0m" << "\033[1;35m DEBUG - INFO - WARNING - ERROR \033[0m" << std::endl;
	std::getline(std::cin, input);
	while (input.empty())
	{
		std::cout << "\033[1;31mEMPTY COMMAND\033[0m" << std::endl;
		return (0);
	}
	Harl.complain(input);
	return (0);
}
