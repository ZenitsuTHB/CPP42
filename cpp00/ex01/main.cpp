//42 HEADER


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
    if (command.empty())
      std::cerr << "Empty command ! try a valid one" << std::endl;
    else if (command == "ADD")
      phonebook.addContact();
    else if (command == "SEARCH")
      phonebook.searchContact();
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
