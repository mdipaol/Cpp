/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:33:51 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 19:01:26 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor Called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	if (this != &obj)
		*this = obj;
}

Brain	&Brain::operator=(Brain const &obj)
{
	if (this != &obj)
	{

	}
	return (*this);
}

