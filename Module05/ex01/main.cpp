/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:54:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/23 19:11:24 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		std::cout << bureaucrat;
		std::string form_name;
		std::string is_signed;
		int grade_sign;
		int grade_exec;
		std::cout << "Insert Form Name" << std::endl;
		std::getline(std::cin, form_name);
		std::cout << "Insert grade to sign the form" << std::endl;
		std::cin >> grade_sign;
		if (grade_sign > 150 || grade_sign < 1)
		{
			std::cerr << "ERROR: Please insert a grade from 1 to 150" << std::endl;
			return (0);
		}
		std::cout << "Insert grade to execute the form" << std::endl;
		std::cin >> grade_exec;
		if (grade_exec > 150 || grade_exec < 1)
		{
			std::cerr << "ERROR: Please insert a grade from 1 to 150" << std::endl;
			return (0);
		}
		Form form(form_name, grade_sign, grade_exec);
		bureaucrat.signForm(form);
		std::cout << "Form information: " << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
