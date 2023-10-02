/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:11:12 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/02 19:08:26 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	if (this != &obj)
		*this = obj;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}

bool	ScalarConverter::is_char(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
		return true;
	return false;
}

bool	ScalarConverter::is_int(const std::string &str)
{
	size_t	i = 0;
	size_t	size = str.length();
	;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i < size)
	{
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

bool	ScalarConverter::is_floatdouble(const std::string &str)
{
	size_t	i = 0;
	size_t	size = str.length();
	int		point = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((i = (str.find('.', i))) != std::string::npos)
	{
		point++;
		if (point > 1)
			return (false);
		i++;
	}
	if (point == 0)
		return (false);
	i = 0;
	while (i < size - 1)
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
			return(false);
		i++;
	}
	if (str[i] && !std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.')
		return(false);
	return(true);
}

bool	ScalarConverter::is_float(const std::string &str)
{
	int	size = str.length();

	if (str[size -1] == 'f')
		return true;
	return false;
}

void	ScalarConverter::conv_char(const std::string &str)
{
	char	c = 0;
	if (str.length() == 1)
		c = str[0];
	else if (str.length() == 3)
		c = str[1];

	std::cout << "Char: '" << c << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(c) << std::endl;
	std::cout << "Float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "Double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::conv_int(const std::string &str)
{
	long long int a = atoll(str.c_str());
	if (is_char_print(static_cast<int>(a)))
		 std::cout << "Char: '" << static_cast<char>(a) << "'" << std::endl;
	else
		std::cout << "Char: " << "Non displayable" << std::endl;
	if (is_int_overflow(a))
		std::cout << "Int: " << static_cast<int>(a) << std::endl;
	else
	{
		std::cout << "Int: " << "overflow " << std::endl;
		std::cout << "|Next conversion may not be accurate|" << std::endl;
	}
	std::cout << "Float: " << static_cast<float>(a) << ".0f" << std::endl;
	std::cout << "Double: " << static_cast<double>(a) << ".0" << std::endl;
}

bool	ScalarConverter::is_char_print(int a)
{
	if (a >= 32 && a < 127)
		return true;
	return false;
}

bool	ScalarConverter::is_int_overflow(long long int a)
{
	if (a > INT_MAX)
		return false;
	if (a < INT_MIN)
		return false;
	if (std::isinf(a))
		return false;
	return true;
}

bool	ScalarConverter::is_float_overflow(float f)
{
	(void)f;
	if (errno == ERANGE)
	{
		errno = 0;
		return false;
	}
	if (std::isinf(f))
		return false;
	return true;
}

bool	ScalarConverter::is_double_overflow(double f)
{
	(void)f;
	if (errno == ERANGE)
	{
		errno = 0;
		return false;
	}
	if (std::isinf(f))
		return false;
	return true;
}

void	ScalarConverter::is_inf(const std::string &str)
{
	if (!str.compare("nan") || !str.compare("nanf"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
	else if (!str.compare("+inff") || !str.compare("inff") || !str.compare("inf") || !str.compare("+inf"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: inff" << std::endl;
		std::cout << "Double: inf" << std::endl;
	}
	else if (!str.compare("-inff") || !str.compare("-inff") || !str.compare("-inf") || !str.compare("-inf"))
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: -inff" << std::endl;
		std::cout << "Double: -inf" << std::endl;
	}
}

void	ScalarConverter::conv_floatdouble(const std::string &str, const int precision)
{
	std::cout << std::fixed << std::setprecision(precision);
	if (is_float(str))
	{
		std::string new_float = str;
		new_float.erase(new_float.size() - 1);
		char *endptr;
		float f = std::strtof(str.c_str(), &endptr);
		std::cout << str << std::endl;
		std::cout << f << std::endl;
		if (is_char_print(static_cast<int>(f)))
			std::cout << "Char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "Char: " << "Non displayable" << std::endl;
		if (is_int_overflow(static_cast<int>(f)))
			std::cout << "Int: " << static_cast<int>(f) << std::endl;
		else
			std::cout << "Int: " << "overflow" << std::endl;
		if (is_float_overflow(f))
		{
			std::cout << "Float: " << f << "f" << std::endl;
		}
		else
		{
			std::cout << "Float: " << "overflow" << std::endl;
			std::cout << "|Next conversion may not be accurate|" << std::endl;
		}
		if (is_double_overflow(static_cast<double>(f)))
			std::cout << "Double: " << static_cast<double>(f) << std::endl;
		else
			std::cout << "Double: " << "overflow" << std::endl;
	}
	else
	{
		char *endptr;
		double d = std::strtod(str.c_str(), &endptr);
		if (is_char_print(static_cast<int>(d)))
			std::cout << "Char: '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "Char: " << "Non displayable" << std::endl;
		if (is_int_overflow(static_cast<int>(d)))
			std::cout << "Int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "Int: " << "overflow" << std::endl;
		if (is_float_overflow(static_cast<float>(d)))
			std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
		else
			std::cout << "Float: " << "overflow" << std::endl;
		if (is_double_overflow(d))
			std::cout << "Double: " << d << std::endl;
		else
			std::cout << "Double: " << "overflow" << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &str, const int precision)
{
	if (!str.compare("nan") || !str.compare("nanf") | !str.compare("+inf") || !str.compare("-inf") || !str.compare("inf") || !str.compare("+inff") || !str.compare("-inff") || !str.compare("inff"))
		is_inf(str);
	else if (is_char(str))
		conv_char(str);
	else if (is_int(str))
		conv_int(str);
	else if (is_floatdouble(str))
		conv_floatdouble(str, precision);
	else
		std::cout << "Insert a correct literal" << std::endl;
}
