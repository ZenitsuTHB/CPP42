/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:49:57 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 19:07:24 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (int argc, char *argv[]) {
	
	(void)argv;
	
	if (argc > 1)
	  return (0);
	
	std::string theString = "HI THIS IS BRAIN";
	std::string *stringPTR = &theString;
	std::string& stringREF = theString;
	
	std::cout << std::endl;
	std::cout << "The memory address of theString is : " << &theString << std::endl;
	std::cout << "The memory address of stringPTR is : " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF is : " << &stringREF << std::endl;
	
	std::cout << std::endl;
	std::cout << "The Value of theString is : " << theString << std::endl;
	std::cout << "The Value of stringPTR is : " << *stringPTR << std::endl;
	std::cout << "The Value of stringREF is : " << stringREF << std::endl;
	
	return 0;
}
