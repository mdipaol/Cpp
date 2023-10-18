/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:28 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/18 18:21:27 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	checkError(std::string str){
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Error: Insert only positive numbers" << std::endl;
			return false;
		}
	}
	long int a = std::atol(str.c_str());
	if (a > INT_MAX)
	{
		std::cout << "Error: Numbers out of int range" << std::endl;
		return false;
	}
	return true;
}

int	main(int argc, char **argv)
{
	if (argc <= 2){
		std::cerr << "Error: Please enter more than one number" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; ++i){
		if (!checkError(argv[i]))
			return 0;
	}
	int i = 1;
	std::string str;
	PmergeMe sort(argc - 1);
	while (i < argc){
		str += argv[i];
		if (i != (argc - 1))
			str += " ";
		i++;
	}
	sort.mergeInsert(str);
	return (0);
}
