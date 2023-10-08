/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:28 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/08 19:01:48 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	checkError(const std::string &str){
	std::istringstream iss(str);
	char	c;
	while (iss >> c){
		if (!std::isdigit(c))
			return false;
	}
	return true;
}

int	main(int argc, char **argv)
{
	if (argc <= 1){
		std::cerr << "Error: Please enter more than one number" << std::endl;
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
	if (!checkError(str)){
		std::cout << "Error: Insert only positive numbers" << std::endl;
		return 0;
	}
	sort.mergeInsert(str);
	return (0);
}
