/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:40:45 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/07 16:07:26 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){

	if (argc == 2){
		std::string str(argv[1]);
		RPN::evaluateRPN(str);
	}
	else{
		std::cerr << "Error: Insert a correct expression string" << std::endl;
	}

}
