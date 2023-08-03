/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:10:15 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 17:57:41 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const &obj);
		Cure	&operator=(Cure const &obj);
		~Cure();

		AMateria *clone() const;
		void use(ICharacter& target);
};
