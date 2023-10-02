/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:11:14 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/02 18:49:31 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <limits>
#include <cmath>
#include <cerrno>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter &operator=(ScalarConverter const &obj);
		~ScalarConverter();

	public:
		static void	convert(const std::string &str, const int precision);
		static bool	is_char(const std::string &str);
		static bool	is_char_print(int c);
		static bool	is_int(const std::string &str);
		static bool	is_int_overflow(long long int a);
		static bool	check_int_overflow()
		static bool	is_floatdouble(const std::string &str);
		static bool	is_float(const std::string &str);
		static bool	is_float_overflow(float f);
		static bool	is_double_overflow(double f);
		static void	conv_char(const std::string &str);
		static void	conv_int(const std::string &str);
		static void	conv_floatdouble(const std::string &str, const int precision);
		static void	is_inf(const std::string &str);
};
