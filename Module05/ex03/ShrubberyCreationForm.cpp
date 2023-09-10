/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:14:43 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:25:57 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 0, 0), _target("")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if(!this->getIsSigned())
		throw AForm::notSigned();
	else if (executor.getGrade() > this->getGradeReqExec())
		throw AForm::GradeTooLowException();

	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());

	file << "       ###       " << std::endl;
	file << "      #o###      " << std::endl;
	file << "    #####o###    " << std::endl;
	file << "   #o###|#/###   " << std::endl;
	file << "    ####|##o#    " << std::endl;
	file << "       }|{       " << std::endl;
	file << "       }|{       " << std::endl;
	file.close();
}
