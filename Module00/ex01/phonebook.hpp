/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:19:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 17:25:28 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>
#include <unistd.h>
#include "contact.hpp"

class Phonebook
{
private:
	Contact Contacts[8];
public:
	void	get_contacts(int i);
	void	display_contacts();
	void	display_index();

	Phonebook();
	~Phonebook();
};


