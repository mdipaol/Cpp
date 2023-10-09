/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/09 11:17:43 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void	fillContainer(T &container, int *arr, int size){
	for (int i = 0; i < size; i++){
		container.push_back(arr[i]);
	}
}

template<typename T>
double	takeTime(T &container, clock_t start){
	mergeInsertion();
	clock_t end = clock();
	return static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

template<typename IT>
void	insertion(IT begin, IT end){
	unsigned int key;
	for (IT it = begin + 1, it < end; ++it){
		key = *it;
		IT j = it - 1;
		while (j >= begin && *j > key){
			*(j + 1) = key;
			--j;
		}
		*(j + 1) = key;
	}
}

template<typename T, typename IT>
void	mergeInsertion(T &container, IT begin, IT end){
	if (begin < end - 1){
		IT mid = begin + std::distance(begin, end) / 2;
		if (std::distance(begin, end) > THRESHOLD)
			mergeInsertion(container, begin, end);
		else
			insertion(begin, end);
		if (std::distance(mid, end) > THRESHOLD)
			mergeInsertion(container, mid, end);
		else
			insertion(mid, end);
	}
}

PmergeMe::PmergeMe(int size) : _size(size)
{
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::mergeInsert(const std::string &str){
	int *arr = new int[this->_size];
	std::istringstream iss(str);
	int a;
	for (int i = 0; i < this->_size && iss >> a; i++)
			arr[i] = a;
	this->_start = clock();
	fillContainer(this->_vector, arr, this->_size);
	fillContainer(this->_deque, arr, this->_size);
	double vecTime = takeTime(this->_vector, this->_start);
	double deqTime = takeTime(this->_deque, this->_start);
}
