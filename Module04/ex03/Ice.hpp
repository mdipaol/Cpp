/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:10:24 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/03 17:57:45 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const &obj);
		Ice	&operator=(Ice const &obj);
		~Ice();

		AMateria *clone() const;
		void use(ICharacter& target);
};
