/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/13 17:29:06 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name(""), _isSigned(false), _gradeReqSign(0),_gradeReqExec(0)
{
}

Form::~Form()
{
}

Form::Form(std::string& name, int gradeReqSign, int gradeReqExec) : _name(name), _isSigned(false), _gradeReqSign(gradeReqSign), _gradeReqExec(gradeReqExec)
{
	if (gradeReqSign < 1 || gradeReqExec < 1)
		throw GradeTooHighException();
	else if  (gradeReqSign > 150 || gradeReqExec > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &obj) : _name(obj._name), _isSigned(obj._isSigned), _gradeReqSign(obj._gradeReqSign), _gradeReqExec(obj._gradeReqExec)
{
	if (this != &obj)
		*this = obj;
}

Form	&Form::operator=(Form const &obj)
{
	if (this != &obj)
	{
		this->_isSigned = obj._isSigned;
	}
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

std::string Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int	Form::getGradeReqSign() const
{
	return (this->_gradeReqSign);
}

int	Form::getGradeReqExec() const
{
	return (this->_gradeReqExec);
}

void	Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > this->_gradeReqSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	out << "\n" << "| " << "Name: " << obj.getName() << " |" << " Signed (1 = yes): " << obj.getIsSigned() << " |" << " Grade Required to sign it: " << obj.getGradeReqSign() << " |" << " Grade Required to execute it: " << obj.getGradeReqExec() << " |" << std::endl;
	return(out);
}
