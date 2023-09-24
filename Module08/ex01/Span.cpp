/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:05:32 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/24 17:04:43 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max_nb(0), _vector(0){}

Span::~Span(){}

Span::Span(unsigned int N) : _max_nb(N){
	this->_vector.reserve(N);
}

Span::Span(const Span &obj) : _max_nb(obj._max_nb), _vector(obj._vector){}

Span	&Span::operator=(const Span &obj){
	if (this != &obj)
	{
		this->_vector = obj._vector;
		this->_max_nb = obj._max_nb;
	}
	return *this;
}

void Span::addNumber(int nb){
	if (this->_vector.size() >= this->_max_nb)
		throw std::out_of_range("There are already max element stored");
	else
		this->_vector.push_back(nb);
}

unsigned int Span::longestSpan(){
	if (this->_vector.size() < 2)
		throw std::out_of_range("Vector empty");
	return *std::max_element(this->_vector.begin(), this->_vector.end()) - *std::min_element(this->_vector.begin(), this->_vector.end());
}

unsigned int Span::shortestSpan(){
	if (this->_vector.size() < 2)
		throw std::out_of_range("Vector empty");

	unsigned int short_span = UINT_MAX;
	std::vector<int> sort_vec(this->_vector);
	std::sort(sort_vec.begin(), sort_vec.end());
	for (std::vector<int>::iterator it = sort_vec.begin(); it != sort_vec.end() - 1; ++it)
	{
		if (static_cast<unsigned int>(*(it + 1) - *it) < short_span)
			short_span = *(it + 1) - *it;
	}
	return (short_span);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last){
	if (this->_vector.size() + std::distance(first, last) > this->_max_nb)
		throw std::out_of_range("The vector is full");
	this->_vector.insert(this->_vector.end(), first, last);
}

