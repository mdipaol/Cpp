/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:38 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/11 10:02:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeReqSign;
		const int _gradeReqExec;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class notSigned : public std::exception
		{
			public:
				const char* what() const throw();
		};
		AForm();
		AForm(const std::string& name, int gradeReqSign, int gradeReqExec);
		AForm(AForm const &obj);
		AForm &operator=(AForm const &obj);
		virtual ~AForm();
		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeReqSign() const;
		int		getGradeReqExec() const;
		void	beSigned(Bureaucrat &obj);

		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& obj);

#endif
