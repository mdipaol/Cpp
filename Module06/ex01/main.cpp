/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:34:12 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/03 18:23:41 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()
{
	Data *data = new Data;

	data->login = "mdi-paol";
	data->password = "1234";

	std::cout << data << std::endl;
	uintptr_t raw = Serialize::serialize(data);
	std::cout << raw << std::endl;
	Data *newData = Serialize::deserialize(raw);
	std::cout << newData << std::endl;

	std::cout << "login " << newData->login << " | " << "password: " << newData->password << std::endl;
	delete newData;
}
