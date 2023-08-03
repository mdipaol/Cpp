/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:19:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 17:42:39 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(AMateria const &obj)
{
	if (this != &obj)
		*this = obj;
}

AMateria	&AMateria::operator=(AMateria const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}



