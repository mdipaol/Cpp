/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:48:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 19:45:03 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
		for (int i = 0; i < 4; i++)
			delete this->Materias[i];
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	if (this != &obj)
		*this = obj;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &obj)
{
	if (this != &obj)
	{
		  for (int i = 0; i < 4; i++)
			Materias[i] = obj.Materias[i];
	}
	return(*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->Materias[i])
		{
			this->Materias[i] = materia->clone();
			break;
		}
	}
	delete (materia);
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->Materias[i])
			{
				if (this->Materias[i]->getType() == type)
				{
					return(this->Materias[i]->clone());
				}
			}
	return (0);
}

