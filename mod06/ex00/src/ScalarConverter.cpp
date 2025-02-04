/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:19:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/04 15:31:01 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include    "../header/IsLiteral.hpp"
# include   "../header/ScalarConverter.hpp"
# include    "../header/PrintConversions.hpp"

ScalarConverter::ScalarConverter() {

    std::cout << "Default constructor called !";
}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
    std::cout << "Copy constructor called !";
    *this = cpy;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &cpy)
{
    (void)cpy;
    std::cout << "Copy assignement operator called !";
    return(*this);
}

void ScalarConverter::convert(const std::string& literal)
{
    
    try {
        
        IsLiteral type;
        int expression = type.getLiteralType(literal);
    
	std::cout << "Expression : " << expression << std::endl;
        switch (expression)
        {            
            case LIT_CHAR:
                printConversionChar(literal);                
                break;
            case LIT_INT:
                printConversionInt(literal);
                break;
            case LIT_FLOAT:
                printConversionFloat(literal);
                break;
            case LIT_DOUBLE:
                printConversionDouble(literal);
                break;
            case LIT_PSEUDO:
                printConversionPseudo(literal);
                break;
            default: throw std::invalid_argument("This is not a valid literal !");
                break;
        }
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return;    
}

ScalarConverter::~ScalarConverter() {
    
    std::cout << "Destructor called !";
}

 


