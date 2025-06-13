/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:54:14 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/13 19:33:53 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BitcoinExchange.hpp"

  
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& databasePath)
{  
    
    try {
        loadDatabase(databasePath);
    }
    catch(...) {
        throw;
    }    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        _database = other._database;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

void  BitcoinExchange::loadDatabase(const std::string& filename)
{
    //std::cout << filename << std::endl;
    std::string line, date, rate;   
    std::ifstream   database(filename.c_str());
    if(!database.is_open())
        throw CustomException(FILE_OPEN_ERROR);
    while (std::getline(database, line))
        std::cout << line << std::endl;
    
    // float key;
    // _database.insert(make_pair(date, key));
}
BitcoinExchange::CustomException::CustomException(int errorCode): _errorCode(errorCode) {}

const char* BitcoinExchange::CustomException::what() const throw() {
    switch (_errorCode) {
        case 1:
            return "Error: could not open file.";
        case 2:
            return "Error: bad input.";
        case 3:
            return "Error: not a positive number.";
        case 4:
            return "Error: too large a number.";
        case 5:
            return "Error: invalid date format.";
        case 6:
            return "Error: value is not a valid number.";
        case 7:
            return "Error: database is empty or invalid.";
        default:
            return "Error: unknown error occurred.";
    }
}

void BitcoinExchange::processInput(const std::string& filename)
{
    (void)filename;
}