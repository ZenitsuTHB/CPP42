/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:54:14 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/10 20:01:32 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/BitcoinExchange.hpp"

  
BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const std::string& database)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &other)
{
    std::map<std::string, float> newMap;
    
}

BitcoinExchange::~BitcoinExchange()
{}

void  BitcoinExchange::loadDatabase(const std::string& filename)
{}
void BitcoinExchange::processInput(const std::string& filename)
{}