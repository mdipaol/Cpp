/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:14:11 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/25 23:23:27 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

const int Fixed::_nb_fractbits = 8;

Fixed::Fixed() : _fp_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &Fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	if (this != &Fixed)
		*this = Fixed;
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called" << std::endl;
	_fp_value = nb << _nb_fractbits;
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called" << std::endl;
	_fp_value = (float)(roundf(nb * (1 << _nb_fractbits)));
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_fp_value = obj.getRawBits();
	}
	return (*this);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return(_fp_value > obj.toFloat());
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return(_fp_value < obj.toFloat());
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	return(_fp_value >= obj.toFloat());
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	return(_fp_value <= obj.toFloat());
}

bool	Fixed::operator==(const Fixed &obj) const
{
	return(_fp_value == obj.toFloat());
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	return(_fp_value != obj.toFloat());
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	float resultValue = toFloat() + obj.toFloat();
	return Fixed(resultValue);
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	float resultValue = toFloat() - obj.toFloat();
	return Fixed(resultValue);
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	float resultValue = toFloat() * obj.toFloat();
	return Fixed(resultValue);
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	float resultValue = toFloat() / obj.toFloat();
	return Fixed(resultValue);
}

Fixed	&Fixed::operator++()
{
	++_fp_value;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	tmp._fp_value = _fp_value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	--_fp_value;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	tmp._fp_value = _fp_value--;
	return(tmp);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return(obj2);
	return (obj1);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return(obj2);
	return (obj1);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return(obj1);
	return (obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return(obj1);
	return (obj2);
}


int	Fixed::getRawBits() const
{
	return (_fp_value);
}

void	Fixed::setRawBits(int const raw)
{
	_fp_value = raw;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}


float	Fixed::toFloat() const
{
	return ((float) (_fp_value) / (1 << _nb_fractbits));
}

int	Fixed::toInt() const
{
	return (_fp_value >> _nb_fractbits);
}
