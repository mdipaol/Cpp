/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:45:52 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/27 17:59:03 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string path) : _path(){
	createDb();
}

void	BitcoinExchange::createDb(){
	std::ifstream inputFile(this->_path.c_str());

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
	for (std::map<std::string, float>::const_iterator it = this->_database.begin(); it != this->_database.end(); ++it)
	{
		std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
	}
}
