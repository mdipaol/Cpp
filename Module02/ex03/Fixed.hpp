/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:49 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/24 20:25:26 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Point
{
private:
		int	_x;
		int	_y;
		//const static int _nb_fractbits;
public:
	Point();
	Point(const float nb_1, const float nb_2);
	Point	&Point::operator=(const Point &obj);
	~Point();
	int	get_x() const;
	int	get_y() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
