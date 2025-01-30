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
    if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
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
    if (isFloatLiteral(literal))
        return (LIT_FLOAT);
    if (isDoubleLiteral(literal))
        return (LIT_DOUBLE);
    if (isPseudoLiteral(literal))
        return (LIT_PSEUDO);
    return (-1);
}

bool IsLiteral::isFloatLiteral(const std::string& literal)
{
    if (literal[literal.length() - 1] != 'f')
        return (false);

    std::string numPart;
    if (literal[0] == '-')
        numPart = literal.substr(1, literal.length() - 2);
    else
        numPart = literal.substr(0, literal.length() - 1);

    if (!std::isdigit(numPart[0]) && numPart[0] != '-')
        return (false);
    bool dotSeen = false;
    if (numPart.empty())
        return (false);
    for (size_t i = 0; i < numPart.length(); i++)
    {
            if (numPart[i] == '.')
            {
                if (dotSeen)
                    return(false);
                dotSeen = true;
            }
            else if (!std::isdigit(numPart[i]))
                return (false);
    }
    return (true);
}

bool IsLiteral::isDoubleLiteral(const std::string& literal)
{    
    bool dotSeen = false;
    if (literal.empty())
        return (false);

    std::string numPart;
    numPart = literal;
    if (literal[0] == '-')
        numPart = literal.substr(1, literal.length());
    for (size_t i = 0; i < numPart.length(); i++)
    {
            if (numPart[i] == '.')
            {
                if (dotSeen)
                    return(false);
                dotSeen = true;
            }
            else if (!std::isdigit(numPart[i]))
                return (false);
    }
    return (true);
}

bool IsLiteral::isPseudoLiteral(const std::string& literal)
{
    return (literal == "-inf" || literal == "+inf" || literal == "nan" ||
     literal == "-inff" || literal == "+inff" || literal == "nanf");
}

IsLiteral::~IsLiteral()
{
    //std::cout << "Destructor called !" << std::endl;
}