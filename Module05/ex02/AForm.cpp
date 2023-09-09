/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/09 17:25:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name(""), _isSigned(false), _gradeReqSign(0),_gradeReqExec(0)
{
}

AForm::~AForm()
{
}

AForm::AForm(std::string& name, int gradeReqSign, int gradeReqExec) : _name(name), _isSigned(false), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
	if (gradeReqSign < 1 || gradeReqExec < 1)
		throw GradeTooHighException();
	else if  (gradeReqSign > 150 || gradeReqExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &obj) : _name(obj._name), _isSigned(obj._isSigned), _gradeReqSign(obj._gradeReqSign), _gradeReqExec(obj._gradeReqExec)
{
	if (this != &obj)
		*this = obj;
}

AForm	&AForm::operator=(AForm const &obj)
{
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return (*this);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int	AForm::getGradeReqSign() const
{
	return (this->_gradeReqSign);
}

int	AForm::getGradeReqExec() const
{
	return (this->_gradeReqExec);
}

void	AForm::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > this->_gradeReqSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& obj)
{
	out << "\n" << "| " << "Name: " << obj.getName() << " |" << " Signed (1 = yes): " << obj.getIsSigned() << " |" << " Grade Required to sign it: " << obj.getGradeReqSign() << " |" << " Grade Required to execute it: " << obj.getGradeReqExec() << " |" << std::endl;
	return(out);
}
