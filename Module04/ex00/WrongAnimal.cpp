/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:32:02 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 18:59:36 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("Wrong Animal")
{
	std::cout << "WronAnimal Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Sound of Wrong Animal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}
