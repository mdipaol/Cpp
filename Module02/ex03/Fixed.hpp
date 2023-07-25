/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:14:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/25 22:51:57 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_fp_value;
	const static int _nb_fractbits;
public:
	Fixed();
	Fixed(Fixed const &Fixed);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed &operator=(const Fixed &obj);
	bool operator>(const Fixed& obj) const;
	bool operator<(const Fixed& obj) const;
	bool operator>=(const Fixed& obj) const;
	bool operator<=(const Fixed& obj) const;
	bool operator==(const Fixed& obj) const;
	bool operator!=(const Fixed& obj) const;
	Fixed operator+(const Fixed& obj) const;
	Fixed operator-(const Fixed& obj) const;
	Fixed operator*(const Fixed& obj) const;
	Fixed operator/(const Fixed& obj) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed	&min(Fixed &obj1, Fixed &obj2);
	static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
	static Fixed	&max(Fixed &obj1, Fixed &obj2);
	static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& obj);

#endif
