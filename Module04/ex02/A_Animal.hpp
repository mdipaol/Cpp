/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/31 16:08:50 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>

class A_Animal
{
	protected:
		std::string	type;
	public:
		A_Animal();
		A_Animal(std::string type);
		A_Animal(A_Animal const &obj);
		A_Animal &operator=(A_Animal const &obj);
		virtual ~A_Animal();

		virtual std::string	getType() const;
		virtual void		makeSound() const = 0;
};

#endif
