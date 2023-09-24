/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:48:03 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/24 18:54:12 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T> {
private:

public:
	MutantStack(){};
	~MutantStack(){};
	MutantStack(const MutantStack &obj ) {*this = obj;}
	MutantStack &operator=(const MutantStack &obj) {
		if (this != &obj)
			this->c = obj.c;
		return *this;}
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	iterator begin() {
		return std::stack<T>::c.begin();
	}

	iterator end() {
		return std::stack<T>::c.end();
	}

	const_iterator begin() const {
		return std::stack<T>::c.begin();
	}

	const_iterator end() const {
		return std::stack<T>::c.end();
	}
};
