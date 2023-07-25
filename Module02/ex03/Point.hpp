/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:49 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/25 20:38:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point();
	Point(const float nb_1, const float nb_2);
	Point(const Point &obj);
	Point	&operator=(const Point &obj);
	~Point();
	float	get_x() const;
	float	get_y() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
