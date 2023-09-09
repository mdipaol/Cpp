/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:14:34 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/09 17:00:03 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucraut;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string &_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif;
