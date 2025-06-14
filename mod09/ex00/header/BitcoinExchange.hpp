/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:33:47 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/14 00:55:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BitcoinExchange.hpp
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>
# include <fstream>
# include <stdio.h>
# include <cstdlib>

enum ErrCode {
    
    BAD_INPUT = 1,
    BAD_HEADER,
    DATABASE_EMPTY,
    FILE_OPEN_ERROR,
    INVALID_DATE,
    INVALID_VALUE,
    NEGATIVE_NUMBER,
    NUMBER_TOO_LARGE,
    UNKNOWN_ERROR    
};

#define HEADERINPUT "date | value"
#define HEADERCSV "date,exchange_rate"

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

#endif