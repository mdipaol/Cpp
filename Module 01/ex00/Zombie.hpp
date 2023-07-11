/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:43:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 17:51:58 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<iostream>

class Zombie
{
private:
	std::string	name;
public:
	std::string get_name();
	Zombie(/* args */);
	~Zombie();
};

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
}

#endif
