/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:25 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/29 19:09:42 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
}

Animal::~Animal()
{
}

Animal::Animal(Animal const &obj)
{
	if(this != &obj)
		*this = obj;
}

Animal &Animal::operator=(Animal const &obj)
{
	if (this != &obj)
	{

	}
	return(*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animalllllllll!" << std::endl;
}
