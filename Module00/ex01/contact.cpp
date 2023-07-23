/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:17:11 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 15:47:10 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

static int flag = 0;

std::string	Contact::TakeFirstName()
{
	int	i = 0;
	if (flag == 0)
		std::cout << "\033[F" << "\033[1;46m             ADD                \033[0m" << std::endl;
	std::cout <<"\033[1;36m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;36mFIRST NAME: ";
	std::getline(std::cin, Contact::_firstname);
	if (_firstname.empty())
	{
		std::cout << "\033[0m";
		std::cout << "\033[1;41m         EMPTY FIELDS           \033[0m" << std::endl;
		flag = 1;
		return (TakeFirstName());
	}
	while (_firstname[i])
	{
		if ((_firstname[i] < 'a' || _firstname[i] > 'z') && (_firstname[i] < 'A' || _firstname[i] > 'Z') && _lastname[i] != ' ')
		{
			std::cout << "\033[0m";
			std::cout << "\033[1;41m  INSERT A CORRECT FIRST NAME   \033[0m" << std::endl;
			flag = 1;
			return (TakeFirstName());
		}
		i++;
	}
	return (_firstname);
}

std::string	Contact::TakeLastName()
{
	int	i = 0;
	std::cout <<"\033[1;36m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;36mLAST NAME: ";
	std::cout << std::flush;
	std::getline(std::cin, Contact::_lastname);
	if (_lastname.empty())
	{
		std::cout << "\033[0m";
		std::cout << "\033[1;41m         EMPTY FIELDS           \033[0m" << std::endl;
		return (TakeLastName());
	}
	while (_lastname[i])
	{
		if ((_lastname[i] < 'a' || _lastname[i] > 'z') && (_lastname[i] < 'A' || _lastname[i] > 'Z') && _lastname[i] != ' ')
		{
			std::cout << "\033[0m";
			std::cout << "\033[1;41m   INSERT A CORRECT LAST NAME   \033[0m" << std::endl;
			return (TakeLastName());
		}
		i++;
	}
	return (_lastname);
}

std::string	Contact::TakeNickname()
{
	std::cout <<"\033[1;36m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;36mNICKNAME: ";
	std::getline(std::cin, Contact::_nickname);
	if (_nickname.empty())
	{
		std::cout << "\033[0m";
		std::cout << "\033[1;41m         EMPTY FIELDS           \033[0m" << std::endl;
		return (TakeNickname());
	}
	return (_nickname);
}

std::string	Contact::TakePhoneNumber()
{
	int	i = 0;
	std::cout <<"\033[1;36m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;36mPHONE NUMBER: ";
	std::getline(std::cin, Contact::_phonenumber);
	if (_phonenumber.empty())
	{
		std::cout << "\033[0m";
		std::cout << "\033[1;41m         EMPTY FIELDS           \033[0m" << std::endl;
			return (TakePhoneNumber());
	}
	while (_phonenumber[i])
	{
		if (_phonenumber[i] < '0' || _phonenumber[i] > '9')
		{
			std::cout << "\033[0m";
			std::cout << "\033[1;41m INSERT A CORRECT PHONE NUMBERS \033[0m" << std::endl;
			return (TakePhoneNumber());
		}
		i++;
	}
	return (_phonenumber);
}

std::string	Contact::TakeDarkestSecret()
{
	std::cout <<"\033[1;36m                                \033[0m" << std::endl;
	std::cout << "\033[F" << "\033[1;36mDARKEST SECRET: ";
	std::getline(std::cin, Contact::_darkestsecret);
	std::cout << "\033[0m";
	if (_darkestsecret.empty())
	{
		std::cout << "\033[0m";
		std::cout << "\033[1;41m         EMPTY FIELDS           \033[0m" << std::endl;
		return (TakeDarkestSecret());
	}
	flag = 0;
	return (_darkestsecret);
}

void	Contact::set_contact()
{
	TakeFirstName();
	TakeLastName();
	TakeNickname();
	TakePhoneNumber();
	TakeDarkestSecret();
}

std::string	Contact::get_data(int index)
{
	if (index == 0)
		return (_firstname);
	else if (index == 1)
		return (_lastname);
	else if (index == 2)
		return (_nickname);
	else if (index == 3)
		return (_phonenumber);
	else if (index == 4)
		return (_darkestsecret);
	return (0);
}

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}
