/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:21:57 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 18:00:48 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	search_contact(Phonebook *address_book)
{
	address_book->display_contacts();
}

void	add_contact(Phonebook *address_book)
{
	Contact first;
	static int i = 0;

	address_book->get_contacts(i);
	if (i == 7)
		i = 0;
	else
		i++;
}

int	main()
{
	Phonebook	address_book;
	int			flag = 0;
	std::string	input;

	while (!flag)
	{
		std::cout << "\033[1;35mADD COMMAND: ";
		std::getline(std::cin, input);
		std::cout << "\033[0m";
		if (input.compare("ADD") == 0)
			add_contact(&address_book);
		else if (input.compare("SEARCH") == 0)
		{
			search_contact(&address_book);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "\033[F" << "\033[1;41m             EXIT               \033[0m" << std::endl;
			flag = 1;
		}
	}
	return (0);
}
