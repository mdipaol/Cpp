/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:17:11 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/08 20:20:25 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::TakeFirstName()
{
	std::getline(std::cin, Contact::_firstname);
	return (_firstname);
}

std::string	Contact::TakeLastName()
{
	std::getline(std::cin, Contact::_lastname);
	return (_lastname);
}

std::string	Contact::TakeNickname()
{
	std::getline(std::cin, Contact::_nickname);
	return (_nickname);
}

std::string	Contact::TakePhoneNumber()
{
	std::getline(std::cin, Contact::_phonenumber);
	return (_phonenumber);
}

std::string	Contact::TakeDarkestSecret()
{
	std::getline(std::cin, Contact::_darkestsecret);
	return (_darkestsecret);
}

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}
