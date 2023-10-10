/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/10 11:26:25 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void	fillContainer(T &container, int *arr, int size){
	for (int i = 0; i < size; i++){
		container.push_back(arr[i]);
	}
}

template<typename IT>
void	insertion(IT begin, IT end){
	int key;
	for (IT it = begin + 1; it < end; ++it){
		key = *it;
		IT j = it - 1;
		while (j >= begin && *j > key){
			*(j + 1) = *j;
			--j;
		}
		*(j + 1) = key;
	}
}

template<typename T, typename IT>
void	mergeInsertion(T &container, IT begin, IT end){
	if (std::distance(begin, end) > THRESHOLD) {
		IT mid = begin + std::distance(begin, end) / 2;
		mergeInsertion(container, begin, mid);
		mergeInsertion(container, mid, end);
		T copy(std::distance(begin, end));
		std::merge(begin, mid, mid, end, copy.begin());
		std::copy(copy.begin(), copy.end(), begin);
	}
	else {
		insertion(begin, end);
	}
}

template<typename T>
double	takeTime(T &container, clock_t start){
	mergeInsertion(container, container.begin(), container.end());
	clock_t end = clock();
	return (static_cast<double>(end - start) * 1000000) / CLOCKS_PER_SEC;
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
	std::cout << "Before: ";
	for (int i = 0; i < this->_size && iss >> a; i++){
		arr[i] = a;
		std::cout << arr[i];
	}
	std::cout << std::endl;
	this->_start = clock();
	fillContainer(this->_vector, arr, this->_size);
	fillContainer(this->_deque, arr, this->_size);
	double vecTime = takeTime(this->_vector, this->_start);
	double deqTime = takeTime(this->_deque, this->_start);
	std::cout << "After: ";
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
		std::cout << *it;
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::deque : "  << deqTime << " us" << std::endl;
}
