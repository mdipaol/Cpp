/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:47:45 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 14:08:26 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	std::string	_name;
	AMateria	*Materias[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &obj);
	MateriaSource	&operator=(MateriaSource const &obj);
	~MateriaSource();

	void learnMateria(AMateria	*materia);
	AMateria* createMateria(std::string const & type);
};

