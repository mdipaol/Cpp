/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:57:08 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 18:38:57 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

class Intern
{
private:

public:
	Intern();
	Intern(Intern const &obj);
	Intern	&operator=(Intern const &obj);
	~Intern();

	AForm *makeForm(const std::string &form, const std::string &target);
};

