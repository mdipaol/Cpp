/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:55 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/25 23:23:47 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float nb_1, const float nb_2) : _x(nb_1), _y(nb_2)
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &obj) : _x(obj._x),  _y(obj._y)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Point	&Point::operator=(const Point &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
	{
		*((Fixed *)&_x) = obj._x;
		*((Fixed *)&_y) = obj._y;
	}
	return (*this);
}

float	Point::get_x() const
{
	return(_x.toFloat());
}

float	Point::get_y() const
{
	return(_y.toFloat());
}

Point::~Point()
{
	//std::cout << "Copy assignment operator called" << std::endl;
}
