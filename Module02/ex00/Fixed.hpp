/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:14:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/21 16:13:31 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int	_fp_value;
	const static int _nb_fb;
public:
	Fixed();
	Fixed(Fixed const &Fixed);
	Fixed &operator= (const Fixed &Fixed);
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
};
