/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:00:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/20 12:01:01 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void	debug() const;
	void	info() const;
	void	warning() const;
	void	error() const;
public:
	Harl();
	~Harl();
	void complain(std::string level);
};
