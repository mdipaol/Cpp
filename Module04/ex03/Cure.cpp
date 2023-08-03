/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:10:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 18:00:48 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &obj)
{
	if (this != &obj)
		*this = obj;
}

Cure	&Cure::operator=(Cure const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}
