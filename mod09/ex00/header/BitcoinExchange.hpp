/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:33:47 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/13 19:31:26 by avolcy           ###   ########.fr       */
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

enum ErrCode {
    
    BAD_INPUT = 1,
    DATABASE_EMPTY = 2,
    FILE_OPEN_ERROR = 3,
    INVALID_DATE = 4,
    INVALID_VALUE = 5,
    NEGATIVE_NUMBER = 6,
    NUMBER_TOO_LARGE = 7,
    UNKNOWN_ERROR = 8    
};

class BitcoinExchange {
private:
    std::map<std::string, float> _database;
    
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