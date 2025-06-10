/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bitcoin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:33:47 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/10 18:36:53 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BitcoinExchange.hpp
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>

class BitcoinExchange {
private:
    std::map<std::string, float> _data;
    
public:
    
    BitcoinExchange();
    BitcoinExchange(const std::string& database);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    
    ~BitcoinExchange();
    
    void loadDatabase(const std::string& filename);
    void processInput(const std::string& filename);
};

#endif