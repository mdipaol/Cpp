/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:54:52 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 20:10:04 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "STRING ADDRES:" << &brain << std::endl;
	std::cout << "stringPTR ADDRESS :" << &stringPTR << std::endl;
	std::cout << "StringREF ADDRESS :" << &stringREF << std::endl;
	std::cout << "STRING:" << brain << std::endl;
	std::cout << "stringPTR:" << *stringPTR << std::endl;
	std::cout << "stringREF:" << stringREF << std::endl;

}
