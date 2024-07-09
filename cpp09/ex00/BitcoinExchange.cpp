/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:09 by antferna          #+#    #+#             */
/*   Updated: 2024/07/09 12:30:58 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange()
{
   
}

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputFile)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    // TODO: insert return statement here
}

void BitcoinExchange::extractFiles(std::ifstream &fileStream, std::string &dbStream)
{
}

void BitcoinExchange::setDbNode(const std::string &dateStr, const double &numDbValue)
{
}

void BitcoinExchange::getValueFromDb(const std::string &dateStr, const double &val)
{
}
