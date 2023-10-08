/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:13:44 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/08 20:09:48 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
void fillContainer(T &container, int *arr, int size){
	for (int i = 0; i < size - 1; i++){
		container.push_back(arr[i]);
	}
}

PmergeMe::PmergeMe(int size) : _size(size)
{
}

PmergeMe::~PmergeMe()
{
}

void	PmergeMe::mergeInsert(const std::string &str){
	int *arr = new int(this->_size);
	std::istringstream iss(str);
	int a;
	for (int i = 0; i < this->_size - 1 && iss >> a; i++)
			arr[i] = a;
	fillContainer(this->_vector, arr, this->_size);
	//fillContainer(this->_deque, arr, this->_size);
	std::vector<int>::iterator it;
	for (it = this->_vector.begin(); it != this->_vector.end(); ++it){
		std::cout << *it << std::endl;
	}
}
