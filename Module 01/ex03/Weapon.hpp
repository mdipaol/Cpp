/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:16:01 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/17 12:44:19 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	const std::string&	get_Type();
	void	set_Type(std::string new_type);
	Weapon();
	~Weapon();
};
