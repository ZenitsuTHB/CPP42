/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:33:47 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/21 13:47:41 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BitcoinExchange.hpp
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>
# include <iostream>
# include <fstream>
# include <stdio.h>
# include <cstdlib>
# include <sstream>
# include <algorithm>

enum ErrCode {
    
    BAD_HEADER = 1,
    DATABASE_EMPTY,
    FILE_OPEN_ERROR,
    INVALID_VALUE,
    UNKNOWN_ERROR    
};

#define HEADERINPUT "date | value"
#define HEADERCSV "date,exchange_rate"
#define HEADER_MSG "Error: bad header !"
#define BAD_INPUT "Error: bad input => "
#define NEG_NUM "Error: not a positive number."
#define CANT_OPEN_MSG "Error: could not open file."
#define UNKNOWN_MSG "Error: unknown error occurred."
#define NUMBER_TOO_LARGE "Error: too large a number."
#define INVALID_DATE "Error: invalid date format => "
#define EMPTY_MSG "Error: database is empty or invalid."
#define VALID_NUM_MSG "Error: value is not a valid number."

typedef std::map<std::string, float> DataBaseMap;

class BitcoinExchange {
private:
    DataBaseMap     _database;
    
public:
    
    BitcoinExchange();
    BitcoinExchange(const std::string& database);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    
    ~BitcoinExchange();
    
    bool  parseDate(const std::string& date);
    void loadDatabase(const std::string& filename);
    void processInput(const std::string& filename);

    class CustomException : public std::exception {
        private:
            int                 _errorCode;
            
        public:
            explicit CustomException(int errorCode);
            const char * what() const throw();
    };
};

int         inputErr(void);
inline bool isLeapYear(int year);
inline bool checkValue(float value);
inline bool isAllDigit(const std::string& toCheck);

#endif