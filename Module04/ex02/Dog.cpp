/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:10:41 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 19:35:52 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor Called" << std::endl;
	delete this->brain;
}

Dog::Dog(Dog const &obj) : AAnimal()
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
