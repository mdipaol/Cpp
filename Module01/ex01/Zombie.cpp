/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:43:21 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 19:52:23 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\033[1;32mZombie Horde\033[0m" "\033[1;32m created\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[1;31mZombie Horde \033[0m" << _name << "\033[1;31m destroyed\033[0m" << std::endl;
	return;
}

void	Zombie::announce()
{
	std::cout << "\033[1;34m" << Zombie::_name << ":\033[0m " << "\033[1;33mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void	Zombie::setName(std::string Hname)
{
	_name = Hname;
}
