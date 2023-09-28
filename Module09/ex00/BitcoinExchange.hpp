/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:44:23 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/28 12:46:54 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _database;
		std::string	_inputPath;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string path);
		~BitcoinExchange();

		void createDb();
		void importInput();
		void checkPrint(std::string date, float value);
		bool checkError(std::map<std::string, float>::const_iterator it, std::string date);
};

#endif
