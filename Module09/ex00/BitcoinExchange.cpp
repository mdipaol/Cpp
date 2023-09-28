/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:45:52 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/28 13:00:34 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string path) : _inputPath(path){
	createDb();
	importInput();
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
	else {
		std::cerr << "Insert a correct data.csv!" << std::endl;
	}
}

bool	BitcoinExchange::checkError(std::map<std::string, float>::const_iterator it, std::string date){
	std::istringstream iss(date);
	(void) it;
	int year, month, day;
	char c1, c2;
	if (iss >> year >> c1 >> month >> c2 >> day) {
		if (c1 == '-' && c2 == '-') {
			if (year >= 2000 && year <= 2100 &&
				month >= 1 && month <= 12 &&
				day >= 1 && day <= 31) {
				return true;
			}
		}
	}
	return false;
}

void	BitcoinExchange::checkPrint(std::string date, float value){
	std::map<std::string, float>::const_iterator it;
	for (it = this->_database.begin(); it != this->_database.end(); ++it){
		//std::cout << it->first << " " << date << std::endl;
		if (!it->first.compare(date)){
			float newValue = it->second * value;
			std::cout << date << "=>" << it->second << "=" << newValue << std::cout;
		}
		else{
			std::string newDate;
			if (checkError(it, date)){
				std::cout << "Correct" << std::endl;
				return ;
			}
			else
				std::cout << "error" << std::endl;
		}
	}
}

void	BitcoinExchange::importInput(){
	std::ifstream inputFile(this->_inputPath.c_str());

	if (inputFile.is_open()){
		std::string line;

		while (std::getline(inputFile, line)){
			std::istringstream iss(line);
			std::string date;
			std::getline(iss, date, '|');
			double value;

			if (iss >> value){
				checkPrint(date, value);
			}
		}
		inputFile.close();
	}
	else{
		std::cerr << "Insert a correct input file" << std::endl;
	}
}

