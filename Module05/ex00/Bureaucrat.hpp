/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:55:26 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/19 11:46:36 by mdi-paol         ###   ########.fr       */
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
		class GradeTooLowExcception : public std::exception
		{
			public:
				const char *what() const throw();
		};
		Bureaucrat();
		Bureaucrat(std::string& name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat& operator=(Bureaucrat const& obj);
		~Bureaucrat();

		std::string getName();
		int			getGrade();
		void		upgrade();
		void		downgrade();
};

#endif
