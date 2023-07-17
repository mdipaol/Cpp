/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:16:19 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/17 12:45:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&	Weapon::get_Type()
{
	return (_type);
}

void	Weapon::set_Type(std::string new_type)
{
	_type = new_type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}
