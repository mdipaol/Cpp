/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:10:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 14:49:50 by mdi-paol         ###   ########.fr       */
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

Cure::Cure(Cure const &obj) : AMateria()
{
	if (this != &obj)
		*this = obj;
}

Cure	&Cure::operator=(Cure const &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
