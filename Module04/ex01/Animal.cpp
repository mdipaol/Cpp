/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:25 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/29 23:27:07 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor Called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	if(this != &obj)
		*this = obj;
}

Animal &Animal::operator=(Animal const &obj)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &obj)
	{

	}
	return(*this);
}

std::string	Animal::getType() const
{
	std::cout << "Animal getType called" << std::endl;
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "The sound of Animal!" << std::endl;
}
