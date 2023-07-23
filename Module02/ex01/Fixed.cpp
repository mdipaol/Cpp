/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:14:11 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/21 16:15:42 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_nb_fb = 8;

Fixed::Fixed() : _fp_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &Fixed)
		*this = Fixed;
}

Fixed	&Fixed::operator=(const Fixed &Fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &Fixed)
	{
		_fp_value = Fixed.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fp_value);
}

void	Fixed::setRawBits(int const raw)
{
	_fp_value = raw;
}
