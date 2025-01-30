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
    std::stringstream ss(literal);
    double num;
    ss >> num;

    if (num < -std::numeric_limits<float>::max() || num > std::numeric_limits<float>::max())
    {
        std::cerr << "\nSorry, input number is out of FLOAT range!\n" << std::endl;
        return;
    }
    std::cout << "char: ";
    if (num >= 0 && num <= 127 && std::isprint(static_cast<int>(num)))
        std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    if (num > std::numeric_limits<int>::max() || num < std::numeric_limits<int>::min())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(num) << std::endl;

    bool isWhole = (std::floor(num) == num);
    std::cout << "float: " << static_cast<float>(num) 
              << (isWhole ? ".0f" : "f") << std::endl;
    std::cout << "double: " << static_cast<double>(num) 
              << (isWhole ? ".0" : "") << std::endl;
}

void printConversionDouble(const std::string literal)
{
   std::stringstream ss(literal);
   long double num;
   ss >> num;

    if (num < -std::numeric_limits<double>::max() || num > std::numeric_limits<double>::max())
    {
        std::cerr << "\nSorry input number has to be within DOUBLE range !\n" << std::endl;
        return;
    }
    std::cout << "char: ";
    if (num >= 0 && num <= 127 && std::isprint(num))
        std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    
    if (num >= -std::numeric_limits<int>::max() && num <= std::numeric_limits<int>::max())
        std::cout << "int: " << static_cast<int>(num) << std::endl;
    else
        std::cout << "int: " << "impossible" << std::endl;
    
    bool isWhole = (std::floor(num) == num);
    if (num >= -std::numeric_limits<float>::max() && num <= std::numeric_limits<float>::max())
        std::cout << "float: " << static_cast<float>(num) << ( isWhole ? ".0f" : "f") << std::endl;
    else
        std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << static_cast<double>(num) <<  ( isWhole ? ".0" : "") << std::endl;
}

void printConversionPseudo(const std::string literal)
{
    if (literal == "nanf" || literal ==  "-inff" || literal == "+inff") 
    {
        float pseudoF;
        if (literal == "nanf")
            pseudoF = std::numeric_limits<float>::quiet_NaN();
        else if (literal == "-inff")
            pseudoF = -std::numeric_limits<float>::infinity();
        else
            pseudoF = std::numeric_limits<float>::infinity();
        
        std::cout << "\nchar: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << pseudoF << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(pseudoF) << "\n" << std::endl;
    }
    else
    {
        double pseudoD;
        if (literal == "nan")
            pseudoD = std::numeric_limits<double>::quiet_NaN();
        else if (literal == "-inf")
            pseudoD = -std::numeric_limits<double>::infinity();
        else
            pseudoD =  std::numeric_limits<double>::infinity();

        std::cout << "\nchar: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(pseudoD) << "f" << std::endl;
        std::cout << "double: " << pseudoD << "\n" << std::endl;
    }
}
