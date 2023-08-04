/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:57:30 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 17:46:21 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "\033[1;42m" << "ScavTrap Constructor called!" << "\033[0m" << std::endl;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[1;42m" << "ScavTrap Constructor called!" << "\033[0m" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap()
{
	std::cout << "\033[1;42m" << "ScavTrap Copy Constructor called!" << "\033[0m" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
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

void	ScavTrap::attack(const std::string& target)
{
	if (_energypoints == 0)
		std::cout << "\033[1;32m" << _name << " has no Energy!" << "\033[0m" << std::endl;
	else if(_hitpoints == 0)
		std::cout << "\033[1;32m" << _name << " has no Heal!" << "\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;31mScavTrap " << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << "\033[0m" << std::endl;
		_energypoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[1;32mScavTrap " << _name << " is now in Gate keeper mode." << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;41m" << "ScavTrap Deconstructor called!" << "\033[0m" << std::endl;
}
