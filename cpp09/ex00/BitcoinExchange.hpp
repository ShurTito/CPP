/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:20 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 11:55:26 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>


class BitcoinExchange
{
    private:
        std::map<std::string, double> _btc;
    public:
        BitcoinExchange();
		BitcoinExchange(const std::string &database, const std::string &inputFile);
        BitcoinExchange(const BitcoinExchange & other);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange & other);

        void extractInputFile(std::ifstream &fileStream);
        void extractDbFile(std::ifstream &dbStream);
        void addToMap(const std::string &date, const double &value);
        void getValueFromDb(const std::string &date, const double &value);
        
};