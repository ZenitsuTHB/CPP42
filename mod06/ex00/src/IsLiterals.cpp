/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsLiterals.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 01:22:48 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/17 01:22:48 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/IsLiteral.hpp"
# include "../header/PrintConversions.hpp"

IsLiteral::IsLiteral()
{
    //std::cout << "Default constructor called !" << std::endl;
}

IsLiteral::IsLiteral(const IsLiteral &cpy)
{
    std::cout << "Copy constructor called !" << std::endl;
    *this = cpy;
}

IsLiteral & IsLiteral::operator=(const IsLiteral &cpy)
{
    (void)cpy;
    std::cout << "Copy assignement operator called !" << std::endl;
    return(*this);
}

bool IsLiteral::isCharLiteral(const std::string& literal)
{
    if (literal.length() == 1)
        return (true);
    return (false);
}

bool IsLiteral::isIntLiteral(const std::string& literal)
{
    if (literal.length() == 1 && !std::isdigit(literal[0]))
        return (false);
    if (literal.length() > 1 && !std::isdigit(literal[0]) && literal[0] != '-')
        return (false);
    for (size_t i = 1; i < literal.length(); i++)
        if (!std::isdigit(literal[i]))
            return (false);
    return (true);
}

int IsLiteral::getLiteralType(std::string literal)
{
    if (!isPrintable(literal))
        return (-1);
    if (isCharLiteral(literal))
        return (LIT_CHAR);
     if (isIntLiteral(literal))
        return (LIT_INT);
   /* if (isValidFloat(literal))
        return (LIT_FLOAT);
    if (isValidDouble(literal))
        return (LIT_DOUBLE); */
    return (-1);
}


IsLiteral::~IsLiteral()
{
    //std::cout << "Destructor called !" << std::endl;
}