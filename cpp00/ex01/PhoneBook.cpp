//42 HEADER


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _num_of_contact(0) { 
 
  return ; 
}
PhoneBook::~PhoneBook() { return ; }

std::string PhoneBook::_getUserData(std::string required, int flag) {

  std::string entered;

  while (entered.empty()) {

    if (flag == 1)
      std::cout << "Enter your" << std::endl;
    std::cout << required << " : ";
    std::getline(std::cin, entered);
  }
  return (entered);
}

bool isValidNum(std::string number) {

  if (number.length() != 9)
    return (false);
  for (size_t i = 0; i < number.length(); i++) {

    if (!std::isdigit(number[i]))
      return (false);
  }
  return (true);
}

void PhoneBook::addContact() {

  size_t  length;
  std::string field[5];
  std::string arr[]={"First name", "Last name", "Nick Name", 
    "Phone Number", "DarkestSecret"};

  length = sizeof(arr) / sizeof(arr[0]);
  for (size_t i = 0; i < length; i++) {

    field[i] = PhoneBook::_getUserData(arr[i], 1);
    if (i == 3 && isValidNum(field[i]) == false)
    {
      while (isValidNum(field[i]) == false) {
        std::cerr << "Invalid number !" << std::endl; 
        std::cerr << "format is 9 digits long Please" << std::endl;
        field[i] = PhoneBook::_getUserData(arr[i], 1);
      }
    }
  } 
  Contact newContact;
  newContact.setUserData(field[0], field[1], field[2], field[3], field[4]);
  _num_of_contact = _num_of_contact % 8;
  _contacts[_num_of_contact] = newContact;
  _contacts[_num_of_contact].added = true;
  _num_of_contact++;
}

void	PrintRightFormat(std::string attr){

	if (attr.length() > 10)
		std::cout << attr.substr(0, 9) + "." << "|";
	else
  {
	  std::cout << std::setw(10);
		std::cout << attr << "|";
  }
}

void PhoneBook::searchContact() const {

  if (_num_of_contact == 0) {

    std::cout << "NO contact have been added yet !" << std::endl;
    std::cout << "Try the ADD command first" << std::endl;
    return ;
  }
  std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
  std::cout << "|  Index   |First name| Last name| Nickname |" << std::endl;
	std::cout << "|══════════|══════════|══════════|══════════|" << std::endl;
  for (int i = 0; i < 8 && _contacts[i].added == true; i++) {
	
    std::cout << "|" << std::setw(10) << i + 1 << "|";
    PrintRightFormat(_contacts[i].getFirstName());
    PrintRightFormat(_contacts[i].getLastName());
    PrintRightFormat(_contacts[i].getNickName());
	  std::cout << std::endl;
    if ((i + 1) != _num_of_contact)
      std::cout << "|══════════|══════════|══════════|══════════|" << std::endl;
    else
      std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
  }
}


void PhoneBook::displayContact() {
  
  std::string strIndx; 
  std::string message[] = {"Please, Enter a VALID! Index for the desired contact"};
  std::string field[]={"First name", "Last name", "Nick Name", 
    "Phone Number", "DarkestSecret"};

  std::cout << std::endl;
  strIndx = "int";
  do {
    strIndx = PhoneBook::_getUserData(message[0], 2);
  } while(strIndx.length() > 1 || !isdigit(strIndx[0]));

  int index = std::atoi(strIndx.c_str());
  if (index > 0 && index <= 8 && _contacts[index - 1].added == true) {
    
  index = index - 1;
  std::cout << field[0] << "_:   " << _contacts[index].getFirstName() << std::endl;
  std::cout << field[1] << "_:   " << _contacts[index].getLastName() << std::endl;
  std::cout << field[2] << "_:   " << _contacts[index].getNickName() << std::endl;
  std::cout << field[3] << "_:   " << _contacts[index].getPhoneNumber () << std::endl;
  std::cout << field[4] << "_:   " << _contacts[index].getDarkestSecret() << std::endl;
  }
  else {
    std::cerr << std::endl << "SORRY ! We don't have any contact that match this index" << std::endl;
    return ;
  }
}

void PhoneBook::greetingsMessage() const {

  std::cout << "╔═════════════════════════════════════════════╗" << std::endl;
  std::cout << "  Hi ! Welcome to OUR amazing PhoneBook 📚," << std::endl;
  std::cout << "  You have three command to interact with it," << std::endl;
  std::cout << "↳ ADD, if you would like to add a new contact," << std::endl;
  std::cout << "↳ SEARCH, if you'd like to look for a contact," << std::endl;
  std::cout << "↳ EXIT, if you want to QUIT !" << std::endl;
  std::cout << "  make your choice wisely !" << std::endl;
  std::cout << "╚═════════════════════════════════════════════╝" << std::endl;
}

void PhoneBook::farewellMessage() const {

  std::cout << "╔═════════════════════════════════════════════╗" << std::endl;
  std::cout << "  Thank you for your time using our PhoneBook," << std::endl;
  std::cout << "  Hope to see you soon ! byebye 👋👋" << std::endl;
  std::cout << "╚═════════════════════════════════════════════╝" << std::endl;
}
