/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:39 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 15:08:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() const
{
	std::cout << "\033[1;32mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\033[0m" << std::endl;
	std::cout << "\033[1;32mI really do!\033[0m" << '\n' << std::endl;
}

void	Harl::info() const
{
	std::cout << "\033[1;32mI cannot believe adding extra bacon costs more money.\033[0m" << std::endl;
	std::cout << "\033[1;32mYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\033[0m" << '\n' << std::endl;
}

void	Harl::warning() const
{
	std::cout << "\033[1;32mI think I deserve to have some extra bacon for free.\033[0m" << std::endl;
	std::cout << "\033[1;32mI've been coming for years whereas you started working here since last month\033[0m" << '\n' << std::endl;
}

void	Harl::error() const
{
	std::cout << "\033[1;32mThis is unacceptable! I want to speak to the manager now.\033[0m" << '\n' << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*function[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string title[4] = {"\033[1;32m[DEBUG]\033[0m", "\033[1;32m[INFO]\033[0m", "\033[1;32m[WARNING]\033[0m", "\033[1;32m[ERROR]\033[0m"};
	int	arr[4] = {0, 1, 2, 3};
	int	i = 4;
	for(int	j = 0; j < 4; j++)
	{
		if (!level.compare(msg[j]))
		{
			i = j;
			break;
		}
	}
	switch (arr[i])
	{
		case 3:
		{
			for (int i = 3; i < 4; i++)
			{
				std::cout << title[i] << std::endl;
				(this->*function[i])();
			}
			break;
		}
		case 2:
		{
			for (int i = 2; i < 4; i++)
			{
				std::cout << title[i] << std::endl;
				(this->*function[i])();
			}
			break;
		}
		case 1:
		{
			for (int i = 1; i < 4; i++)
			{
				std::cout << title[i] << std::endl;
				(this->*function[i])();
			}
			break;
		}
		case 0:
		{
			for (int i = 0; i < 4; i++)
			{
				std::cout << title[i] << std::endl;
				(this->*function[i])();
			}
			break;
		}
		default:
			std::cout << "\033[1;32m[ Probably complaining about insignificant problems ]\033[0m" << std::endl;
			break;
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
