/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:07:37 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/31 16:08:36 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Correct Test
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

 	delete meta;
	delete j;
	delete i;

	//Wrong Test
	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* j = new WrongCat();


	// std::cout << j->getType() << " " << std::endl;
	// j->makeSound();
	// meta->makeSound();

 	// delete meta;
	// delete j;

	return 0;
}
