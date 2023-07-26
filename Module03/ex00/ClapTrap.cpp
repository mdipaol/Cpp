/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:30:15 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/26 18:50:47 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
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

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10),_attackdamage(0)
{
	std::cout << "\033[1;42mConstructor called!\033[0m" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energypoints == 0)
		std::cout << "\033[1;32m" << _name << " has no Energy!" << "\033[0m" << std::endl;
	else if(_hitpoints == 0)
		std::cout << "\033[1;32m" << _name << " has no Heal!" << "\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;31m" << _name << " attacks " << target << ", causing " << _attackdamage << " points of damage!" << "\033[0m" << std::endl;
		_energypoints--;
	}

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;31m" << _name << " has taken " << amount << " points of Damage!" << "\033[0m" << std::endl;
	_hitpoints = _hitpoints - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoints == 0)
	{
		std::cout << "\033[1;32m" << _name << " has no Energy!" << "\033[0m" << std::endl;
		return;
	}
	else if(_hitpoints == 0)
	{
		std::cout << "\033[1;32m" << _name << " has no Heal!" << "\033[0m" << std::endl;
		return;
	}
	else
	{
		_hitpoints = _hitpoints + amount;
		_energypoints--;
		std::cout << "\033[1;32m" << _name << " repaired for " << amount << " Heal points!" << "\033[0m" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;41m" << "Deconstructor called!" << "\033[0m" << std::endl;
}
