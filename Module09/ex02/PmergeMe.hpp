/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/08 18:47:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe
{
	private:
		int					_size;
		int					_threshold;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
	public:
		PmergeMe();
		PmergeMe(int size);
		~PmergeMe();

		void	mergeInsert(const std::string &str);
};
