/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:45:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/28 20:38:19 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "standard_name";
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energypoints = 50;
	FragTrap::_attackdamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energypoints = 50;
	FragTrap::_attackdamage = 30;
}

void	DiamondTrap::printattributes()
{
	std::cout << _name << std::endl;
	std::cout << this->_hitpoints << std::endl;
	std::cout << this->_energypoints << std::endl;
	std::cout << this->_attackdamage << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}
