/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/29 15:09:28 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../header/BitcoinExchange.hpp"

int inputErr(void)
{
	std::cout << CANT_OPEN_MSG << std::endl;
	return (-1);
}

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
