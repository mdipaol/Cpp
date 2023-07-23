/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:39 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 12:02:34 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug() const
{
	std::cout << "\033[1;32mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\033[0m" << std::endl;
}

void	Harl::info() const
{
	std::cout << "\033[1;32mI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\033[0m" << std::endl;
}

void	Harl::warning() const
{
	std::cout << "\033[1;32mI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month\033[0m" << std::endl;
}

void	Harl::error() const
{
	std::cout << "\033[1;32mThis is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*function[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int	i = 0; i < 4; i++)
	{
		if (!level.compare(msg[i]))
			return ((this->*function[i])());
	}
	std::cout << "\033[1;31mBAD COMMAND\033[0m" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
