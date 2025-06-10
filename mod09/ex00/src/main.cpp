/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/10 19:53:10 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <iostream>
# include <fstream>
#include "../Bitcoin.hpp"

int inputErr(void)
{
	std::cout << "Error: could not open file.\n";
	return (-1);
}
 bool checkfile(const std::string& arg){
	return true;	
}

// Pas de fichier fourni --> Error: could not open file.
// Date invalide --> Error: bad input => [date]
// Valeur négative --> Error: not a positive number.
// Valeur > 1000 --> Error: too large a number.
// Format incorrect --> Error: bad input


int main(int argc, char *arg[])
{
	std::string line;
	if(argc != 2)
		return(inputErr());
	//input split by / char 
	if (!checkfile(arg[1]))
		return(inputErr());

	try {

		Bitcoin loa
		
	}
		std::ifstream file(arg[1]);
	while(std::getline( file ,line ))
		std::cout << line << "\n";
	//split date and value 
	return (0);
}
