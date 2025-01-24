/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintConversions.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 00:54:54 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/17 00:54:54 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/PrintConversions.hpp"

bool isPrintable(const std::string& literal)
{
    for (size_t i = 0; i < literal.length(); i++)
        if (!std::isprint(literal[i]))
            return (false);
    return (true);
}

void printConversionChar(const std::string literal)
{
    char c;

    c = literal[1];
    std::cout << "char: ";
    if (std::isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) <<".0"<< std::endl;
}

void printConversionInt(const std::string literal)
{
   
    long long i = std::atol(literal.c_str());
    if (i > __INT_MAX__ || i < __INT_MIN__)
    {
        std::cerr << "\nSorry input number has to be within INT range !\n" << std::endl;
        return;
    }
    std::cout << "char: ";
    if (i >= 0 && i <= 127 && std::isprint(i))
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) <<".0"<< std::endl;
}

void printConversionFloat(const std::string literal)
{
    (void)literal;
    std::cout << "hola float \n";
}