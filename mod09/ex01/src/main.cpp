/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:00:01 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/28 15:54:28 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RPN.hpp"
#include <iostream>

int argError() {
    std::cerr << RED << "\n\tEntry Error !\n"
              << YELLOW << "\t\tUsage example :\n"
              << "\t\t./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\"\n";
    return 1;
}

int main(int argc, char *argv[]) 
{
	if (argc != 2)
        return argError();
	
	std::string input = argv[1];
	if (input.empty()) {
		std::cerr << "Error: Empty expression\n";
		return 1;
	}

    try {
        RPN rpn;
        int result = rpn.evaluate(argv[1]);
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
        return 1;
    }
    return 0;
}