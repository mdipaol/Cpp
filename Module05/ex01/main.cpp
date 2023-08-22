/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:54:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/19 14:25:38 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::string name;
	int grade;

	std::cout << "Insert name of Bureaucrat" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Insert grade of Bureaucrat" << std::endl;
	std::cin >> grade;
	if (grade > 150 || grade < 1)
	{
		std::cout << "ERROR: Please insert a grade from 1 to 150" << std::endl;
		return (0);
	}
	std::cin.ignore();
	try
	{
		std::string chooser;
		Bureaucrat bureaucrat(name, grade);
		std::cout << "Do you want an UPGRADE or DOWNGRADE?" << std::endl;
		std::getline(std::cin, chooser);
		if (chooser.compare("UPGRADE") == 0)
		{
			bureaucrat.upgrade();
			std::cout << bureaucrat;
		}
		else if (chooser.compare("DOWNGRADE") == 0)
		{
			bureaucrat.downgrade();
			std::cout << bureaucrat;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
