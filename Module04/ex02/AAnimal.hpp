/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:08:18 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/31 16:08:50 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &obj);
		AAnimal &operator=(AAnimal const &obj);
		virtual ~AAnimal();

		virtual std::string	getType() const;
		virtual void		makeSound() const = 0;
};

#endif
