/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:19:06 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 17:25:23 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	cut_str(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + '.';
	return (str);
}

void	Phonebook::display_index()
{
	std::string input;
	int	i;
	std::string str[5] = {"FIRST NAME: ", "LAST NAME: ", "NICKANAME: ", "PHONE NUMBER: ", "DARKEST SECRET: "};
	std::cout << "\033[1;33mCHOOSE INDEX: ";
	std::getline(std::cin, input);
	std::cout << "\033[0m";
	i = atoi(input.c_str());
	if (i < 1 || i > 8 || Contacts[i - 1].get_data(0).empty())
	{
		std::cout << "\033[1;41m            INSERT A CORRECT INDEX           \033[0m" << std::endl;
		display_index();
	}
	else
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << "\033[1;36m" << str[j] << Contacts[i - 1].get_data(j) << "\033[0m" << std::endl;
		}
	}
}

void	Phonebook::display_contacts()
{
	std::string index = "INDEX";
	std::string firstname = "FIRST NAME";
	std::string lastname = "LAST NAME";
	std::string nickname = "NICKANAME";

	int i = 1;
	if (Contacts[i - 1].get_data(0).empty() || Contacts[i - 1].get_data(1).empty() || Contacts[i - 1].get_data(2).empty())
	{
		std::cout << "\033[F" << "\033[1;33m   THE ADDRESS BOOK IS EMPTY    \033[0m" << std::endl;
		return;
	}

	std::cout << "\033[F" << "\033[1;33m                   SEARCH                    \033[0m" << std::endl;
	std::cout << "\033[1;33m";
	std::cout << "|" << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << firstname << "|";
	std::cout << std::right << std::setw(10) << lastname << "|";
	std::cout << std::right << std::setw(10) << nickname << "|" << std::endl;

	for(int i = 1; i < 9; i++)
	{
		if (!Contacts[i - 1].get_data(0).empty() || !Contacts[i - 1].get_data(1).empty() || !Contacts[i - 1].get_data(2).empty())
		{
			std::cout << "|" << std::right << std::setw(10) << i << "|";
			std::cout << std::right << std::setw(10) << cut_str(Contacts[i - 1].get_data(0)) << "|";
			std::cout << std::right << std::setw(10) << cut_str(Contacts[i - 1].get_data(1)) << "|";
			std::cout << std::right << std::setw(10) << cut_str(Contacts[i - 1].get_data(2)) << "|" << std::endl;
		}
	}
	std::cout << "\033[0m";
	display_index();
}

void	Phonebook::get_contacts(int i)
{
	Contacts[i].set_contact();
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
