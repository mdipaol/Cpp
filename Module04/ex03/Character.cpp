/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:52:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 14:24:56 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->Floor[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->Floor[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->Materias[i];
	for (int i = 0; i < 4; i++)
		delete this->Floor[i];
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
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
			this->Materias[i] = obj.Materias[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->Materias[i])
		{
			this->Materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	for (int i = 0; i < 10; i++)
	{
		if (!this->Floor[i])
		{
			this->Floor[i] = this->Materias[idx];
			this->Materias[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (this->Materias[idx])
		this->Materias[idx]->use(target);
}
