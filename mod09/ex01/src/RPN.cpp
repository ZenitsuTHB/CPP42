/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:27:50 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/29 14:58:48 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RPN.hpp"

inline bool RPN::isOperator(const std::string& token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

inline int RPN::calculate(int a, int b, const std::string& op) {
    
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0)
            throw std::runtime_error("Division by zero");
        return a / b;
    }
    throw std::runtime_error("Invalid operator");
}

void RPN::printStack(std::stack<int> stack)
{
	std::stack<int> tmp = stack;
	std::list<int> list;
	while (!tmp.empty())
	{
		list.push_front(tmp.top());
		tmp.pop();
	}
	std::list<int>::iterator it = list.begin();
	std::cout << "Stack: ";
	while (it != list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int RPN::evaluate(const std::string& input) {

    std::string token;
    std::stringstream ss(input);

    while (ss >> token) 
    {
        if (token.length() == 1 && std::isdigit(token[0]))
            _stack.push(token[0] - '0');
        else if (isOperator(token))
        {
            if (_stack.size() < 2)
                throw std::runtime_error("Insufficient operands before operator " + token);
            
            int b = _stack.top(); _stack.pop();
            int a = _stack.top(); _stack.pop();
            _stack.push(calculate(a, b, token));
        }
        else
            throw std::runtime_error("Invalid token: " + token);
    }
    if (_stack.empty())
        throw std::runtime_error("Empty stack after evaluation");
    if (_stack.size() > 1)
         throw std::runtime_error("Malformed expression: leftover values in stack");
    return (_stack.top());
}
