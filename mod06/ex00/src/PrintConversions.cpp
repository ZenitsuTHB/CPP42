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

void printConversionChar(char c)
{
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
    std::cout << "char: ";
    int i = std::atoi(literal.c_str());
    std::cout << "to int: " << i << std::endl;
   /*/ //int MAX_INT = 2147483647 to avoid overflow
    //int MIN_INT = -2147483648 to avoid overflow
    std::istringstream(literal) >> i; */
    if (i >= 0 && i <= 127 && std::isprint(i))
        std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) <<".0"<< std::endl;
}