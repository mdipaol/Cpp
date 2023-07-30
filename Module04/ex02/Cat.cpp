/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:09:51 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 19:41:47 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "A_Animal.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor Called" << std::endl;
	delete this->brain;
}

Cat::Cat(Cat const &obj) : A_Animal(obj)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat	&Cat::operator=(Cat const &obj)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
