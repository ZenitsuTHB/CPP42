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

        bool isIntLiteral(const std::string& literal);
        bool isCharLiteral(const std::string& literal);
        bool isFloatLiteral(std::string literal);
        bool isDoubleLiteral(std::string literal);

        int getLiteralType(std::string literal);
};

enum e_literal
{
    LIT_INT,
    LIT_FLOAT,
    LIT_DOUBLE,
    LIT_CHAR
};

#endif