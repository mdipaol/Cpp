/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:06:02 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/24 17:04:28 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span
{
	private:
		unsigned int		_max_nb;
		std::vector<int>	_vector;
		Span();
	public:
		Span(unsigned int N);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();

		void addNumber(int nb);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
};
