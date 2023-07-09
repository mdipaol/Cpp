/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:19:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/09 22:18:55 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
#include "contact.hpp"

class Phonebook
{
public:
	Contact Contacts[8];

	void	display_contacts();
	void	display_index();
	Phonebook();
	~Phonebook();
};


