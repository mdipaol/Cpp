/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:55 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/24 20:26:11 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float nb_1, const float nb_2) : _x(nb_1), _y(nb_2)
{
	std::cout << "Copy constructor called" << std::endl;
}

Point	&Point::operator=(const Point &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_x = obj.get_x();
		_y = obj.get_y();
	}
	return (*this);
}

int	Point::get_x() const
{
	return(_x);
}

int	Point::get_y() const
{
	return(_y);
}

Point::~Point()
{
	std::cout << "Copy assignment operator called" << std::endl;
}
