/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:11:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/11 20:06:38 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter &operator=(ScalarConverter const &obj);
		~ScalarConverter();

/* 		static char		_char;
		static int		_int;
		static float	_float;
		static double	_double;
		static bool		_inf; */

	public:
		static void	convert(const std::string &str);
		//static	int	recognize_type(const std::string &str);
		static bool	is_char(const std::string &str);
		static bool	is_int(const std::string &str);
		static bool	is_floatdouble(const std::string &str);
		static void	conv_char(const std::string &str);
		//static void	conv_int(const std::string &str);
		//static void	conv_floatdouble(const std::string &str);
};
