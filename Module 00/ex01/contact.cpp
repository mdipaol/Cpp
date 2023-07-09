/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:17:11 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/09 18:46:43 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::TakeFirstName()
{
	std::cout << "\033[F" << "\033[1;46m             ADD                \033[0m" << std::endl;
	std::cout <<"\033[1;46m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;46mFIRST NAME: ";
	std::getline(std::cin, Contact::_firstname);
	return (_firstname);
}

std::string	Contact::TakeLastName()
{
	std::cout <<"\033[1;46m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;46mLAST NAME: ";
	std::getline(std::cin, Contact::_lastname);
	return (_lastname);
}

std::string	Contact::TakeNickname()
{
	std::cout <<"\033[1;46m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;46mNICKNAME: ";
	std::getline(std::cin, Contact::_nickname);
	return (_nickname);
}

std::string	Contact::TakePhoneNumber()
{
	std::cout <<"\033[1;46m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;46mPHONE NUMBER: ";
	std::getline(std::cin, Contact::_phonenumber);
	return (_phonenumber);
}

std::string	Contact::TakeDarkestSecret()
{
	std::cout <<"\033[1;46m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;46mDARKEST SECRET: ";
	std::getline(std::cin, Contact::_darkestsecret);
	std::cout << "\033[0m";
	return (_darkestsecret);
}

void	Contact::set_contact()
{
	TakeFirstName();
	TakeLastName();
	TakeNickname();
	TakePhoneNumber();
	TakeDarkestSecret();
	if (_firstname.empty() || _lastname.empty() || _nickname.empty() || _phonenumber.empty() || _darkestsecret.empty())
	{
		std::cout << "\033[1;44m         EMPTY FIELDS           \033[0m" << std::endl;
		std::cout << "\033[1;46m EMPTY FIELDS \033[0m" << std::endl;
		set_contact();
	}
}

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}
