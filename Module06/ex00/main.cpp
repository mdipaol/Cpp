/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:11:09 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/02 18:30:24 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <string>

int	main(int argc, char **argv)
{
	std::string str = argv[1];
	int precision = 0;
	if (str.find('.') != std::string::npos && str.find('f') != std::string::npos)
	{
		precision = str.size() - str.find('.') - 2;
		//std::cout << precision << std::endl;
	}
	else if (str.find('.') != std::string::npos)
	{
		precision = str.size() - str.find('.') - 1;
		//std::cout << precision << std::endl;
	}
	if (argc == 2)
		ScalarConverter::convert(argv[1], precision);
	else
		std::cout << "Error" << std::endl;
	return (0);
}
