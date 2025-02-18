/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:00:01 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/18 13:34:53 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RPN.hpp"

int	argError()
{
	std::cout << RED << "\n\tEntry Error !\n";
	std::cout << YELLOW << "\t\tUsage example :\n";
	std::cout << "\t\t./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"\n";
	std::cout << "\thint :  digit ONLY !\n";
	return(-1);
}

bool	isOperator(char c)
{
	return(c == '/'||c == '*'||c == '+'||c == '-' || c == ' ');
}

int checkEntry(const std::string str)
{
	if(str.length() < 3)
		return(argError());
	for(size_t i = 0; i < str.length(); i++)
		if(!std::isdigit(str[i]) && !isOperator(str[i]))
			return (-1);
	return(0);
}

int main(int argc, char *argv[])
{
	if(argc != 2)
		return(argError());
	int ok = std::isdigit(argv[1][0]);
	std::cout << ok;
	if(checkEntry(argv[1]) != -1)
		std::cout << argv[1] << GREEN <<"\ninput arg number is correct !\n";
	else
		return(argError());
	return(0);
}
