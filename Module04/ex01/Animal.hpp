/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/29 19:04:11 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &obj);
		Animal &operator=(Animal const &obj);
		virtual ~Animal();

		virtual std::string	getType() const;
		virtual void		makeSound() const;
};

#endif
