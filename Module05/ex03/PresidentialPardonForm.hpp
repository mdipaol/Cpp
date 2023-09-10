/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:15:38 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:29:24 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucraut;

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &_target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif
