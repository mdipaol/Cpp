/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:19:28 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 14:08:03 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &obj);
		AMateria	&operator=(AMateria const &obj);
		virtual ~AMateria();

		std::string const &getType() const; //Returns the materia type
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter& target);
};

