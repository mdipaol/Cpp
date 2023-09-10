/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:15:36 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:29:28 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 0, 0), _target("")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), _target(obj._target)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if(!this->getIsSigned())
		throw AForm::notSigned();
	else if (executor.getGrade() > this->getGradeReqExec())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
