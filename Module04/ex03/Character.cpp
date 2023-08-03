/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:52:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 17:57:11 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
}

Character::Character(Character const &obj)
{
	if (this != &obj)
		*this = obj;
}

Character	&Character::operator=(Character const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}
