/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/17 20:33:58 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <iostream>
# include <fstream>
//#include "../Bitcoin.hpp"

int inputErr(void)
{
	std::cout << "Error: could not open file.\n";
	return (-1);
}


int main(int argc, char *arg[])
{
	std::string line;
	if(argc != 2)
		return(inputErr());
	//input split by / char 
	std::ifstream file("input.txt");
	while(std::getline( file ,line ))
		std::cout << line << "\n";
	//check file extension
	//check file permission
	//CHECK EACH LINES
		//split date and value 
		//check if date is correct 	

	return (0);
}
