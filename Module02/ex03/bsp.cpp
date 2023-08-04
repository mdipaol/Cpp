/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:34:48 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 16:38:04 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/* AREA TRIANGLE = abs((p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y)+ p3.x*(p1.yp2.y))/2.0) //total area triangle of 3 points */
/* search 3 area with the point */
/* area == area1 + area2 + area3 //check if the total area is equal the sum of the three area with point */

bool	checker(Point const P1, Point const P2, Point const P3, Point const point)
{
	if ((P1.get_x() == P2.get_x() && P1.get_y() == P2.get_y()) || (P1.get_x() == P3.get_x() && P1.get_y() == P3.get_y()) || (P2.get_x() == P3.get_x() && P2.get_y() == P3.get_y()))
		return(false);
	if ((point.get_x() == P1.get_x() && point.get_y() == P1.get_y()) || (point.get_x() == P2.get_x() && point.get_y() == P2.get_y()) || (point.get_x() == P3.get_x() && point.get_y() == P3.get_y()))
		return(false);
	if (((point.get_x() - P1.get_x()) / (P2.get_x() - P1.get_x())) == ((point.get_y() - P1.get_y()) / (P2.get_y() - P1.get_y())))
		return (false);
	if (((point.get_x() - P2.get_x()) / (P3.get_x() - P2.get_x())) == ((point.get_y() - P2.get_y()) / (P3.get_y() - P2.get_y())))
		return (false);
	if (((point.get_x() - P3.get_x()) / (P1.get_x() - P3.get_x())) == ((point.get_y() - P3.get_y()) / (P1.get_y() - P3.get_y())))
		return (false);
	return(true);
}

float	triangleArea(Point const P1, Point const P2, Point const P3)
{
	return (std::abs((P1.get_x() * (P2.get_y() - P3.get_y()) + P2.get_x() * (P3.get_y() - P1.get_y()) + P3.get_x() * (P1.get_y() - P2.get_y())) / 2.0));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if(checker(a, b, c, point))
	{
		float area = triangleArea(a, b, c);
		float area1 = triangleArea(point, b, c);
		float area2 = triangleArea(a, point, c);
		float area3 = triangleArea(a, b, point);
		return(area == area1 + area2 + area3);
	}
	else
	{
		return(false);
	}
}
