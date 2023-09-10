/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:15:01 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:29:31 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyReequestForm::RobotomyReequestForm() : AForm("", 0, 0), _target("")
{
}

RobotomyReequestForm::~RobotomyReequestForm()
{
}

RobotomyReequestForm::RobotomyReequestForm(const std::string& target): AForm("RobotomyReequestForm", 72, 45), _target(target)
{
}

RobotomyReequestForm::RobotomyReequestForm(const RobotomyReequestForm &obj) : AForm(obj), _target(obj._target)
{
}

RobotomyReequestForm& RobotomyReequestForm::operator=(const RobotomyReequestForm& obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

std::string RobotomyReequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyReequestForm::execute(Bureaucrat const &executor) const
{
	if(!this->getIsSigned())
		throw AForm::notSigned();
	else if (executor.getGrade() > this->getGradeReqExec())
		throw AForm::GradeTooLowException();
	static int i = rand();
	if (i % 2 == 0)
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else
		std::cout << this->_target << "has not been robotomized!" << std::endl;
	i++;
}
