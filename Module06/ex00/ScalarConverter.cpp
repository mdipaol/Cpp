/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:11:12 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/11 19:27:17 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_char;
int		ScalarConverter::_int;
float	ScalarConverter::_float;
double	ScalarConverter::_double;

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
	int	i;

	if (str.length() == 1 && !isdigit(str[1]))
		return true;
	return false;
}

bool	ScalarConverter::is_int(const std::string &str)
{
	size_t	i = 0;
	size_t	size = str.length();

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i < size)
	{
		if (!isdigit(str[i]))
			return false;
		return true;
	}
}

bool	ScalarConverter::is_floatdouble(const std::string &str)
{
	size_t	i = 0;
	size_t	size = str.length();
	int		point = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i = str.find('.', i) != std::string::npos)
	{
		point++;
		if (point > 1)
			return (false);
		i++;
	}
	if (point == 0)
		return (false);
	while (i < size - 1)
	{
		if (!isdigit(str[i]) && str[i] != '.')
			return(false);
		i++;
	}
	if (!isdigit(str[i]) && str[i] != 'f')
		return(false);
	return(true);
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

void	ScalarConverter::convert(const std::string &str)
{
	if (is_char(str))
		conv_char(str);
	else if (is_int(str))
		conv_int(str);
	else if (is_floatdouble(str))
		conv_floatdouble(str);

}

/* void	ScalarConverter::convert(const std::string &str)
{
	int	type = recognize_type(str);


}
 */
