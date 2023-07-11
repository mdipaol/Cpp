/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:22:36 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/11 11:34:33 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;
public:
	std::string	TakeFirstName();
	std::string	TakeLastName();
	std::string	TakeNickname();
	std::string	TakePhoneNumber();
	std::string	TakeDarkestSecret();
	void		set_contact();
	std::string	get_data(int index);

	Contact();
	~Contact();
};

#endif
