/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:20 by antferna          #+#    #+#             */
/*   Updated: 2024/07/08 17:26:36 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

        void extractFiles(std::ifstream &fileStream, std::string &dbStream);
        void setDbNode(const std::string &dateStr, const double &numDbValue);
        void getValueFromDb(const std::string &dateStr, const double &val);
        
};