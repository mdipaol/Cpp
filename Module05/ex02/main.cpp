/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:54:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:40:37 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		std::string name;
		int grade;
		int	nb_form;

		std::cout << "Insert name of Bureaucrat" << std::endl;
		std::getline(std::cin, name);
		std::cout << "Insert grade of Bureaucrat" << std::endl;
		std::cin >> grade;
		if (grade > 150 || grade < 1)
		{
			std::cout << "ERROR: Please insert a grade from 1 to 150" << std::endl;
			return (0);
		}
		Bureaucrat bureaucrat(name, grade);
		std::cout << "Choose a form:" << std::endl;
		std::cout << "(1) Shrubbery | (2) Robotmy | (3) Presidential" << std::endl;
		std::cin >> nb_form;
		switch (nb_form)
		{
			case 1:
			{
				ShrubberyCreationForm form1("Shrubbery");
				bureaucrat.signForm(form1);
				bureaucrat.executeForm(form1);
				break;
			}
			case 2:
			{
				RobotomyReequestForm form2("Robotmy");
				bureaucrat.signForm(form2);
				bureaucrat.executeForm(form2);
				bureaucrat.executeForm(form2);
				bureaucrat.executeForm(form2);
				bureaucrat.executeForm(form2);
				break;
			}
			case 3:
			{
				PresidentialPardonForm form3("Presidential");
				bureaucrat.signForm(form3);
				bureaucrat.executeForm(form3);
				break;
			}
			default:
				return (0);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
