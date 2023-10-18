/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:45:52 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/17 17:51:13 by mdi-paol         ###   ########.fr       */
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

bool	BitcoinExchange::checkErrorValue(double value){
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (value > 1000)
	{
		std::cout << "Error: too large number." << std::endl;
		return false;
	}
	return true;
}

bool	BitcoinExchange::checkErrorDate(const std::string &date){
	std::istringstream iss(date);
	int year, month, day;
	char c1, c2;
	if (iss >> year >> c1 >> month >> c2 >> day) {
		if (c1 == '-' && c2 == '-') {
			if (year >= 2009 && year <= 2100 && month >= 1 && month <= 12 && day >= 1 && day <= 31) {
				return true;
			}
		}
	}
	std::cout << "Error: bad input => " << date << std::endl;
	return false;
}

void	BitcoinExchange::findClosestLowerDate(const std::string &date, double value){
	std::map<std::string, double>::const_reverse_iterator rit;
	for (rit = this->_database.rbegin(); rit != this->_database.rend(); ++rit){
		if (rit->first.compare(date) <= 0){
			double newValue = rit->second * value;
			std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(3) << newValue << std::endl;
			break;
		}
	}
}

bool	BitcoinExchange::checkInputLine(const std::string &line)
{
	std::istringstream iss(line);
	std::string date, separator;
	double value;
	if (iss >> date >> separator >> value && separator == "|" && iss.eof())
		return true;
	std::cout << "Error: Bad input" << std::endl;
	return false;
}

void	BitcoinExchange::importInput(){
	std::ifstream inputFile(this->_inputPath.c_str());
	if (inputFile.is_open()){
		std::string line;
		while (std::getline(inputFile, line)){
			std::istringstream iss(line);
			std::string date;
			if (checkInputLine(line))
			{
				if (line.find('|') == std::string::npos){
					std::cout << "Error: Bad input" << std::endl;
					continue;
				}
				std::getline(iss, date, '|');
				double value;
				if (iss >> value){
					date.erase(date.size() - 1);
					if (checkErrorDate(date) && checkErrorValue(value))
						findClosestLowerDate(date, value);
				}
				else if (date.empty())
					std::cout << "Error: Bad input" << std::endl;
			}
		}
		inputFile.close();
	}
	else{
		std::cerr << "Insert a correct input file" << std::endl;
	}
}

