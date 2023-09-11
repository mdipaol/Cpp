/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:57:04 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/11 09:56:18 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm	*makeShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*makeRobotomy(const std::string &target)
{
	return (new RobotomyReequestForm(target));
}

AForm	*makePresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(const std::string &form, const std::string &target)
{
	AForm	*(*function[3])(const std::string &target) = {makePresidential, makeRobotomy, makeShrubbery};
	std::string formNames[] = {"Presidential", "Robotomy", "Shrubbery"};
	for (int i = 0; i < 3; ++i)
	{
		if (form == formNames[i])
			return function[i](target);
	}
	return (NULL);
}
