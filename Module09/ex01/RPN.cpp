/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:40:42 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/18 17:16:25 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::stack<int> RPN::_stack;

RPN::RPN(){
}

RPN::RPN(const RPN &obj){
	(void) obj;
}

RPN &RPN::operator=(const RPN &obj){
	if (this != &obj){

	}
	return *this;
}

RPN::~RPN(){
}

bool RPN::isOperator(const char &c){
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

void	RPN::evaluateRPN(const std::string &str){

	std::istringstream iss(str);
	std::string token;

	while (iss >> token){
		if (std::isdigit(token[0])){
			if (std::atoi(token.c_str()) >= 0 && std::atoi(token.c_str()) <= 9)
				_stack.push(std::atoi(token.c_str()));
		}
		else if(isOperator(token[0])){
			if (_stack.size() < 2){
				std::cerr << "Error: Not enough operands for operator!" << std::endl;
				return ;
			}
			else{
				int	num1 = _stack.top();
				_stack.pop();
				int	num2 = _stack.top();
				_stack.pop();

				if (token == "+"){
					_stack.push(num1 + num2);
				}
				else if (token == "-"){
					_stack.push(num2 - num1);
				}
				else if (token == "*"){
					_stack.push(num1 * num2);
				}
				else if (token == "/"){
					if (num1 == 0){
					std::cerr << "Error: Can't divide for 0!" << std::endl;
					return ;
					}
					_stack.push(num2 / num1);
				}
			}
		}
		else
		{
			std::cerr << "Error: Is not a valid expression" << std::endl;
			return ;
		}
	}

	if (_stack.size() != 1){
		std::cerr << "Error: Is not a valid expression" << std::endl;
		return;
	}
	std::cout << _stack.top() << std::endl;
}
