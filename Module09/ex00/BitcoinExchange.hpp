/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:44:23 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/10/17 17:23:48 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _database;
		std::string	_inputPath;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string path);
		~BitcoinExchange();

		void createDb();
		void importInput();
		bool checkErrorDate(const std::string &date);
		bool checkErrorValue(double value);
		bool checkInputLine(const std::string &line);
		void findClosestLowerDate(const std::string &date, double value);
};

#endif
