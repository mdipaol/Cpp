/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:55:24 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/19 11:54:35 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if  (grade > 150)
		throw GradeTooLowExcception();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj)
{
	if (this != &obj)
		*this = obj;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
		this->_grade = obj._grade;
	return (*this);
}
