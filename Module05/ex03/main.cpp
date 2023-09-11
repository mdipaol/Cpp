/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:54:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/11 10:09:15 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		std::string name;
		std::string target;
		int grade;
		std::string	form_type;

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
		Bureaucrat bureaucrat(name, grade);
		std::cout << "Choose a form:" << std::endl;
		std::cout << "Shrubbery | Robotomy | Presidential" << std::endl;
		std::getline(std::cin, form_type);
		std::cout << "Insert a target:" << std::endl;
		std::getline(std::cin, target);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm(form_type, target);
		if (rrf)
		{
			rrf->beSigned(bureaucrat);
			bureaucrat.executeForm(*rrf);
			delete rrf;
		}
		else
			std::cout << form_type << " doesn't exists!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
