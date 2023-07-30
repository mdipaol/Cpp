/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:07:37 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 18:57:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animal[100];

	for(int i = 0; i < 100; i++)
	{
		if (i < 50)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		delete animal[i];
	return(0);

	// TEST SUBJECT
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	// return 0;
}
