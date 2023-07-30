/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:25 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 19:35:22 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : type("A_Animal")
{
	std::cout << "A_Animal Constructor Called" << std::endl;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal Deconstructor Called" << std::endl;
}

A_Animal::A_Animal(A_Animal const &obj)
{
	std::cout << "A_Animal Copy Constructor Called" << std::endl;
	if(this != &obj)
		*this = obj;
}

A_Animal &A_Animal::operator=(A_Animal const &obj)
{
	std::cout << "A_Animal Copy assignment operator called" << std::endl;
	if (this != &obj)
	{

	}
	return(*this);
}

std::string	A_Animal::getType() const
{
	std::cout << "Animal getType called" << std::endl;
	return (type);
}

void	A_Animal::makeSound() const
{
	std::cout << "The sound of Animal!" << std::endl;
}
