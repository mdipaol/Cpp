/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:44:26 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/27 17:43:41 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange b(argv[1]);
		//std::cout << argv[1] << std::endl;
		return(0);
	}
	else
	{
		return (0);
	}
}
