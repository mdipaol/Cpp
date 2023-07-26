/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 00:39:02 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/27 00:56:49 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[1;42m" << "FragTrap Constructor called!" << "\033[0m" << std::endl;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[1;42m" << "FragTrap Constructor called!" << "\033[0m" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	std::cout << "\033[1;42m" << "FragTrap Copy Constructor called!" << "\033[0m" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	if(this != &obj)
	{
		this->_hitpoints = obj._hitpoints;
		this->_attackdamage = obj._attackdamage;
		this->_energypoints = obj._energypoints;
		this->_name = obj._name;
	}
	return(*this);
}

void	FragTrap::highFivesGuy()
{
	std::cout << "\033[1;32mFragTrap " << _name << " high fives" << "\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;41m" << "FragTrap Deconstructor called!" << "\033[0m" << std::endl;
}
