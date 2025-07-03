/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:54:14 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/21 14:40:12 by avolcy           ###   ########.fr       */
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

void  BitcoinExchange::loadDatabase(const std::string& filename)
{
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
            // if(!parseDate(date))
            //     throw CustomException(INVALID_DATE);
            _database.insert(std::make_pair(date, rate));
        }
    }
    if(_database.empty())
        throw CustomException(DATABASE_EMPTY);
}

BitcoinExchange::CustomException::CustomException(int errorCode) : 
_errorCode(errorCode) {}

const char* BitcoinExchange::CustomException::what() const throw() {
    switch (_errorCode) {
        case 1:
            return HEADER_MSG;
        case 2:
            return EMPTY_MSG;
        case 3:
            return CANT_OPEN_MSG;
        case 4:
            return VALID_NUM_MSG;
        default:
            return UNKNOWN_MSG;
    }
}

inline bool isAllDigit(const std::string& toCheck){
    
    for(std::string::const_iterator it = toCheck.begin(); it != toCheck.end(); ++it)
        if (!std::isdigit((*it)))
            return false;
    return true;               
}

inline bool isLeapYear(int year) {
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

bool isValidDate(int year, int month, int day)
{
    if (day < 1 || day > 31)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (year < 2009 || (year == 2009 && month == 1 && day < 3))
        return false;
    if (month == 2)
    {
        if (isLeapYear(year))
            return (day <= 29);
        else
            return (day <= 28);    
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 ||
         month == 8 || month == 10 || month == 12)
         return (day <= 31);
    
    if (month == 4 || month == 6 || month == 9 || month == 11)
            return (day <= 30);
    return false;
}

bool  BitcoinExchange::parseDate(const std::string& date)
{
    std::string yearStr, monthStr, dayStr;
    std::istringstream split(date);

    if (!std::getline(split, yearStr, '-') || 
    !std::getline(split, monthStr, '-') || !std::getline(split, dayStr))
        return false;

    if (!isAllDigit(yearStr) || !isAllDigit(monthStr) || !isAllDigit(dayStr))
        return false;
    
    int year = std::atoi(yearStr.c_str());   
    int month = std::atoi(monthStr.c_str());   
    int day = std::atoi(dayStr.c_str());
    
    if (!isValidDate(year, month, day))
        return false;
    return true;
}
inline bool checkValue(float value)
{
        if (value < 0) {
            std::cerr << NEG_NUM << std::endl;
            return false;
        }
        else if (value > 1000) {
            std::cerr << NUMBER_TOO_LARGE << std::endl;
            return false;
        }
        return true;
}

void BitcoinExchange::processInput(const std::string& filename)
{
    std::string     line, date, pipe, valueStr;
    std::ifstream   input(filename.c_str());

    if (!input.is_open())
        throw CustomException(FILE_OPEN_ERROR);

    std::getline(input, line);
    if (line != HEADERINPUT)
        throw CustomException(BAD_HEADER);       
       
    while (std::getline(input, line))
    {
        std::istringstream iss(line);
        if (!(iss >> date >> pipe >> valueStr) || pipe != "|") {
            std::cerr << BAD_INPUT << line << std::endl;
            continue;
        }
        
        if(!parseDate(date)){
            std::cerr << INVALID_DATE << line << std::endl;
            continue;
        }
        
        float value = std::atof(valueStr.c_str());
        if (!checkValue(value))
            continue;

        DataBaseMap::const_iterator it = _database.find(date);
        if (it == _database.end()) {
            it = _database.lower_bound(date);
            if (it == _database.begin() && it->first != date)
                continue;
            else if (it != _database.begin())
                --it;
        }
        if (it != _database.end())
            std::cout << date << " => " << value << " = " << value * it->second << std::endl;
    }   
}

//lower_bound(date) ? 
//Returns an iterator to the first key ≥ date 
//In other words, the first date that is equal to or after  the requested date.

BitcoinExchange::~BitcoinExchange() {}