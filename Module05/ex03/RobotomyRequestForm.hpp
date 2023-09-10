/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:15:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/10 17:29:40 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucraut;

class RobotomyReequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyReequestForm();
		RobotomyReequestForm(const std::string &_target);
		RobotomyReequestForm(const RobotomyReequestForm &obj);
		RobotomyReequestForm& operator=(const RobotomyReequestForm &obj);
		~RobotomyReequestForm();

		std::string	getTarget() const;
		void	execute(Bureaucrat const &executor) const;
};

#endif
