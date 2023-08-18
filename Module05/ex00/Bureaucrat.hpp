/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:55:26 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/18 17:11:38 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		class GradeTooHighExcception : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowExcception : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		Bureaucrat();
		~Bureaucrat();
};

