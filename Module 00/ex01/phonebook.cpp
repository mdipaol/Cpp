/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:19:06 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/09 19:34:53 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::display_contacts()
{
	std::string index = "INDEX";
	std::string firstname = "FIRST NAME";
	std::string lastname = "LAST NAME";
	std::string nickname = "NICKANAME";

	std::cout << "\033[F" << "\033[1;43m                   SEARCH                    \033[0m" << std::endl;
	std::cout << "\033[1;43m";
	std::cout << "|" << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << firstname << "|";
	std::cout << std::right << std::setw(10) << lastname << "|";
	std::cout << std::right << std::setw(10) << nickname << "|" << "\033[0m" << std::endl;
}

Phonebook::Phonebook()
{
	std::string home;
	std::cout << "\033[1;42m Welcome to your Address Book   \033[0m" << std::endl;
	std::cout << "\033[1;43m   You can use this commands    \033[0m" << std::endl;
	std::cout << "\033[1;45m      ADD - SEARCH - EXIT       \033[0m" << std::endl;
	return;
}

Phonebook::~Phonebook()
{
	return;
}
