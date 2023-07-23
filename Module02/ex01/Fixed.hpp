/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:14:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/23 17:39:32 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Fixed &operator= (const Fixed &Fixed);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& obj);
