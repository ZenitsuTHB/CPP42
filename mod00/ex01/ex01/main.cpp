/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:38:36 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/13 12:09:42 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void) 
{
  PhoneBook phonebook;
  std::string command;

  phonebook.greetingsMessage();
  while (42) {

    std::cout << "\n/º_º-══> ";
    std::getline(std::cin, command);
    if (std::cin.eof())
    {
		std::cout << std::endl;
      	std::cerr << "EOF command ! try a valid one" << std::endl;
      	return(1) ;
    }
    else if (command == "ADD")
      phonebook.addContact();
    else if (command == "SEARCH")
    {
      if (phonebook.searchContact())
		  phonebook.displayContact();
    }
    else if (command == "EXIT") 
    {
      phonebook.farewellMessage();
      return (EXIT_SUCCESS);
    }
    else {

      std::cerr << std::endl << "Invalid command detected !" << std::endl;
      std::cerr << "You migth enter a valid command" << std::endl;
    }
  }
  return (EXIT_SUCCESS);
}
