/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:45:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 17:50:20 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[1;42mDiamond Constructor called!\033[0m" << std::endl;
	this->_name = "standard_name";
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energypoints = 50;
	FragTrap::_attackdamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "\033[1;42mDiamond Constructor called!\033[0m" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energypoints = 50;
	FragTrap::_attackdamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\033[1;42m" << "Diamond Copy Constructor called!" << "\033[0m" << std::endl;
	if (this != &obj)
		*this = obj;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
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

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << ClapTrap::_name << " or " << DiamondTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;41m" << "Diamond Deconstructor called!" << "\033[0m" << std::endl;
}
