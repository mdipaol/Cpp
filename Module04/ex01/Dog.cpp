/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:10:41 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/29 23:11:52 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor Called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
