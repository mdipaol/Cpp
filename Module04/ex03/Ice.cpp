/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:10:21 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 19:22:52 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "cure";
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &obj)
{
	if (this != &obj)
		*this = obj;
}

Ice	&Ice::operator=(Ice const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at" << this
}
