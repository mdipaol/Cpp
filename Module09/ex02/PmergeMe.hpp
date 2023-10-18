/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/17 18:24:05 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>
#include <cerrno>
#include <limits.h>

#define THRESHOLD 4

class PmergeMe
{
	private:
		int					_size;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		clock_t				_start;
	public:
		PmergeMe();
		PmergeMe(int size);
		~PmergeMe();

		void	mergeInsert(const std::string &str);
};
