/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:54:19 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/29 14:55:10 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
# define RPN_HPP_

#include <string>
#include <iostream>
#include <sstream>
#include <list>
#include <stack>
#include <stdexcept>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[0;39m"

class RPN {
    private:
        std::stack<int> _stack;
    
        static bool isOperator(const std::string& token);
        static int calculate(int a, int b, const std::string& op);
        void printStack(std::stack<int> stack);
    
    public:
        int evaluate(const std::string& expr);
    };

#endif
