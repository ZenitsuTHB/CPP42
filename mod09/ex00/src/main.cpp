/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/14 03:35:01 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/BitcoinExchange.hpp"

int inputErr(void)
{
	std::cout << "Error: could not open file.\n";
	return (-1);
}
// Pas de fichier fourni --> Error: could not open file.
// Date invalide --> Error: bad input => [date]
// Valeur négative --> Error: not a positive number.
// Valeur > 1000 --> Error: too large a number.
// Format incorrect --> Error: bad input


int main(int argc, char *arg[])
{
	if(argc != 2)
		return(inputErr(), 1);
	try {
		BitcoinExchange exchange("files/data.csv");
		exchange.processInput(arg[1]);
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
