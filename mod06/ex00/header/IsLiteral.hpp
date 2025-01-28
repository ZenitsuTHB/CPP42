/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IsLiteral.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:35:03 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/16 20:35:03 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IsLiteral_HPP
# define IsLiteral_HPP

#include <iostream>
#include <string>

class IsLiteral
{
    public:
        IsLiteral();
        IsLiteral(const IsLiteral &cpy);
        IsLiteral & operator=(const IsLiteral &cpy);
        ~IsLiteral();

        bool isPseudoLiteral(const std::string& str);
        bool isIntLiteral(const std::string& literal);
        bool isCharLiteral(const std::string& literal);
        bool isFloatLiteral(const std::string& literal);
        bool isDoubleLiteral(const std::string& literal);

        int getLiteralType(std::string literal);
};

enum e_literal
{
    LIT_CHAR,
    LIT_INT,
    LIT_FLOAT,
    LIT_DOUBLE,
    LIT_PSEUDO
};

#endif