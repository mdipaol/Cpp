/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:25 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 19:35:22 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Deconstructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &obj)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
	if(this != &obj)
		*this = obj;
}

AAnimal &AAnimal::operator=(AAnimal const &obj)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &obj)
	{

	}
	return(*this);
}

std::string	AAnimal::getType() const
{
	std::cout << "Animal getType called" << std::endl;
	return (type);
}

void	AAnimal::makeSound() const
{
	std::cout << "The sound of Animal!" << std::endl;
}
