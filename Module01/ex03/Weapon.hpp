/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:16:01 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/19 10:13:34 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	const std::string	&getType();
	void	setType(std::string new_type);
	Weapon(std::string type);
	~Weapon();
};

#endif
