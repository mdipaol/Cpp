/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:43:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/15 19:02:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<iostream>

class Zombie
{
private:
	std::string	_name;
public:
	void announce();
	Zombie(std::string name);
	~Zombie();
};

Zombie	*newZombie(std::string name);
void randomChump(std::string name);

#endif
