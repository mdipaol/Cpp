/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:19:06 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/08 20:13:14 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "\033[1;42m Welcome to your Address Book   \033[0m" << std::endl;
	std::cout << "\033[1;43m   You can use this commands    \033[0m" << std::endl;
	std::cout << "\033[1;45m      ADD - SEARCH - EXIT       \033[0m" << std::endl;
	return;
}

Phonebook::~Phonebook()
{
	return;
}
