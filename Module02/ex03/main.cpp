/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/26 00:04:36 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int	main()
{
	Point const a (2, 2);
	Point const b (3, 3);
	Point const c (2, 5);
	Point const point (2.5f, 3.5f);

	if (bsp(a, b, c, point))
		std::cout << "\033[1;32mThe point is inside the triangle\033[0m" << std::endl;
	else
		std::cout << "\033[1;31mThe point is not inside the triangle\033[0m" << std::endl;
}
