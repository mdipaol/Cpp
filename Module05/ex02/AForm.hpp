/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:38 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/24 19:14:07 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
		Form();
		Form(std::string& name, int gradeReqSign, int gradeReqExec);
		Form(Form const &obj);
		Form &operator=(Form const &obj);
		~Form();
		std::string getName() const;
		bool		getIsSigned() const;
		int			getGradeReqSign() const;
		int		getGradeReqExec() const;
		void	beSigned(Bureaucrat &obj);

		virtual execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
