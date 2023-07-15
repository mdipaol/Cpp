/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:43:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 19:13:56 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<iostream>
#include <cstdlib>

class Zombie
{
private:
	std::string	_name;
public:
	void announce();
	Zombie();
	~Zombie();
	void	setName(std::string Hname);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
