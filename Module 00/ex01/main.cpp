/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:21:57 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/08 20:22:53 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

void	search_contact(Phonebook *address_book)
{
	(void)address_book;
}

void	add_contact(Phonebook *address_book)
{
	Contact first;
	std::cout << "wow" << std::endl;
	(void)address_book;
}

int	main()
{
	Phonebook	address_book;
	int			flag = 0;
	std::string	input;

	while (!flag)
	{
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			add_contact(&address_book);
		else if (input.compare("SEARCH") == 0)
		{
			search_contact(&address_book);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "\033[1;41m EXIT \033[0m" << std::endl;
			flag = 1;
		}
	}
	return (0);
}
