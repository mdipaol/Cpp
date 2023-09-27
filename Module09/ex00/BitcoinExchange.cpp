/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:45:52 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/27 19:09:21 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string path) : _inputPath(path){
	createDb();
}

void	BitcoinExchange::createDb(){
	std::ifstream inputFile("data.csv");

	if (inputFile.is_open()){
		std::string line;

		while (std::getline(inputFile, line)){
			std::istringstream iss(line);
			std::string date;
			std::getline(iss, date, ',');
			double value;

			if (iss >> value){
				this->_database[date] = value;
			}
		}
		inputFile.close();
	}
	else{
		std::cerr << "Insert a correct Path!" << std::endl;
	}
}
