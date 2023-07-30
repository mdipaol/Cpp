/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:55:17 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/30 18:56:23 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:

public:
	std::string ideas[100];
	Brain();
	Brain(Brain const &obj);
	Brain	&operator=(Brain const &obj);
	~Brain();
};

#endif
