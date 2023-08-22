/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:55:26 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/19 14:08:29 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
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
		Bureaucrat();
		Bureaucrat(std::string& name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat& operator=(Bureaucrat const& obj);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;
		void		upgrade();
		void		downgrade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
