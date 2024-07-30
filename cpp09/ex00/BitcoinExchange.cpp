/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:09 by antferna          #+#    #+#             */
/*   Updated: 2024/07/30 12:00:58 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputFile){
    std::ifstream dbStream;
    std::ifstream fileStream;

    dbStream.open(database.c_str());
    fileStream.open(inputFile.c_str());
    if(dbStream.fail() || fileStream.fail()){
        std::cerr << "Error: Error opening file" << std::endl;
        exit(1);
    }
    extractDbFile(dbStream);
    extractInputFile(fileStream);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
    this->_btc = other._btc;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        this->_btc = other._btc;
    return *this;
}

static bool dayCheck(int y, int m, int d){
    if(d < 0 || d > 31)
        return false;
    if(m < 0 || m > 12)
        return false;
    if(m == 2){
        if(y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
            if(d > 29)
                return false;
        }
        else if(d > 28)
            return false;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d > 30)
            return false;
    }
    return true;
}

static void dateCheck(std::string date){
    int y, m, d, i;

    i = date.find('-');
    if(i != -1){
        y = atoi(date.substr(0, i).c_str());
        date = date.substr(i + 1);
    }
    else
        throw std::invalid_argument("Error: Invalid date format");
    i = date.find('-');
    if(i != -1){
        m = atoi(date.substr(0, i).c_str());
        date = date.substr(i + 1);
    }
    else
        throw std::invalid_argument("Error: Invalid date format");
    d = atoi(date.c_str());
    if(!dayCheck(y, m, d))
        throw std::invalid_argument("Error: Invalid date format");
}

static void saveInputFile(const std::string &line, BitcoinExchange &be)
{
    std::string date;
    std::string value;
    double numValue;
    int n;
    
    
    if(line == "date | value")
        return;
    try{
        n = line.find('|');
        if(n != -1){
            date = line.substr(0, n);
            value = line.substr(n + 1);
            numValue = atof(value.c_str());
            dateCheck(date);
            if(numValue >= 1000 || (numValue == 0.0 && (value != "0" || value != "0.0")))
                throw std::invalid_argument("Error: Invalid value, out of range");
            if(numValue < 0.0)
                throw std::invalid_argument("Error: Invalid value, negative value");
            be.getValueFromDb(date, numValue);
        }
        else
            throw std::invalid_argument("Error: Invalid input format");
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}

void BitcoinExchange::extractInputFile(std::ifstream &fileStream){
    std::string line;
    while (fileStream.good()){
        std::getline(fileStream, line);
        saveInputFile(line, *this);
    }
    
}

static void saveDBEntry(std::string &str, BitcoinExchange &be){
   int i = str.find(',');
   std::string date = str.substr(0, i);
   double value = atof(str.substr(i + 1).c_str());
   be.addToMap(date, value);
}

void BitcoinExchange::extractDbFile(std::ifstream &dbStream){
    std::string line;
    while(dbStream.good()){
        std::getline(dbStream, line);
        saveDBEntry(line, *this);
    }
}

void BitcoinExchange::addToMap(const std::string &date, const double &value){
    this->_btc.insert(std::pair<std::string, double>(date, value));
}

static void printValue(std::string str, const double &value, std::map<std::string, double>::iterator it){
    std::cout << str << " => " << value << " = " << value * it->second << std::endl;
}

void BitcoinExchange::getValueFromDb(const std::string &date, const double &value){
    std::map<std::string, double>::iterator it = this->_btc.begin();
    try
    {
        if (date < it->first)
            throw std::invalid_argument("Error: Invalid date, date is too early");
        it = this->_btc.lower_bound(date);
        if(it != _btc.begin()){
            if(it->first != date)
                it--;
            printValue(date, value, it);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
