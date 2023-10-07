/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:40:39 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/07 16:21:17 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
private:
	RPN();
	RPN(const RPN &obj);
	RPN &operator=(const RPN &obj);
	~RPN();

	static std::stack<int> _stack;
	static bool	isOperator(const char &c);
public:
	static void	evaluateRPN(const std::string &str);
};
