/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:10:06 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 19:43:20 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &obj);
		Dog	&operator=(Dog const &obj);
		~Dog();

		void makeSound() const;
};

#endif
