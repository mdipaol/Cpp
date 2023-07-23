/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:16:19 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 16:57:14 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}
