/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:31:28 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/29 23:23:07 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor Called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Sound of Wrong Cat" << std::endl;
}
