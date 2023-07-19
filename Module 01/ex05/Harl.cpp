/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:39 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/19 18:00:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*debug)(void) = &Harl::debug;
	void	(Harl::*info)(void) = &Harl::info;
	void	(Harl::*warning)(void) = &Harl::warning;
	void	(Harl::*error)(void) = &Harl::error;

	if (level.compare("DEBUG"))
		(this->*debug)();
	else if (level.compare("INFO"))
		(this->*info)();
	else if (level.compare("WARNING"))
		(this->*warning)();
	else if (level.compare("ERROR"))
		(this->*error)();
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
