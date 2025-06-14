/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:54:14 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/14 04:10:38 by avolcy           ###   ########.fr       */
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

bool parseDate(std::string date)
{
    std::string Year;    
    std::string Month;    
    std::string Day;    
}

void  BitcoinExchange::loadDatabase(const std::string& filename)
{
    //std::cout << filename << std::endl;
   
    std::string line, date;   
    std::ifstream   database(filename.c_str());
    if(!database.is_open())
        throw CustomException(FILE_OPEN_ERROR);
    
    std::getline(database, line);
    if (line != HEADERCSV)
       throw CustomException(BAD_HEADER); 
    while (std::getline(database, line)) {
        
        size_t commaPos = line.find(',');
        if (commaPos != std::string::npos && commaPos > 0 && commaPos < line.size() - 1)
        {
            date = line.substr(0, commaPos);
            float rate = std::atof(line.substr(commaPos + 1).c_str());
            if(!parseDate(date))
                throw CustomException(INVALID_DATE);
            _database.insert(std::make_pair(date, rate));
        }
    }
    if(_database.empty())
        throw CustomException(DATABASE_EMPTY);
}

// DataBaseMap::iterator it  = _database.begin();
// while (it != _database.end())
// {
//     std::cout << it->first << " --- "<< it->second << std::endl;
//     it++;
// }

BitcoinExchange::CustomException::CustomException(int errorCode) : 
_errorCode(errorCode) {}

const char* BitcoinExchange::CustomException::what() const throw() {
    switch (_errorCode) {
        case 1:
            return "Error: bad input.";
        case 2:
            return "Error: bad header !";
        case 3:
            return "Error: database is empty or invalid.";
        case 4:
            return "Error: could not open file.";
        case 5:
            return "Error: invalid date format.";
        case 6:
            return "Error: value is not a valid number.";
        case 7:
            return "Error: not a positive number.";
        case 8:
            return "Error: too large a number.";
        default:
            return "Error: unknown error occurred.";
    }
}

void BitcoinExchange::processInput(const std::string& filename)
{
    (void)filename;
}

BitcoinExchange::~BitcoinExchange()
{}