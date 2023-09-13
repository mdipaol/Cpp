/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:34:05 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/13 19:17:45 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::~Serialize()
{
}

Serialize::Serialize(Serialize const &obj)
{
	if (this != &obj)
		*this = obj;
}

Serialize	&Serialize::operator=(Serialize const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
