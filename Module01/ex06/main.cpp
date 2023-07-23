/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:05:40 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 11:54:43 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	Harl		Harl;

	if (argc == 2)
	{
		input = argv[1];
		Harl.complain(input);
		return(0);
	}
	else
	{
		std::cout << "\033[1;31mBAD COMMAND\033[0m" << std::endl;
		return (0);
	}
}
