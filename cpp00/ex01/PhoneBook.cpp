//42 HEADER


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _num_of_contact(0) { 
 
  return ; 
}
PhoneBook::~PhoneBook() { return ; }

std::string PhoneBook::_getUserData(std::string required) {

  std::string entered;

  while (entered.empty()) {

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

  size_t length;
   std::string field[]={"firstName", "lastName", "nickName",
    "phoneNumber", "darkestSecret"};
  std::string arr[]={"First name", "Last name", "Nick Name", 
    "Phone Number", "DarkestSecret"};

  length = sizeof(arr) / sizeof(arr[0]);
  for (size_t i = 0; i < length; i++) {

    field[i] = PhoneBook::_getUserData(arr[i]);
    if (i == 3 && isValidNum(field[i]) == false)
    {
      while (isValidNum(field[i]) == false) {
        std::cerr << "Invalid number !" << std::endl; 
        std::cerr << "format is 9 digits long Please" << std::endl;
        field[i] = PhoneBook::_getUserData(arr[i]);
      }
    }
  } 
  Contact newContact;
  newContact.setUserData(field[0], field[1], field[2], field[3], field[4]);
  _contacts[_num_of_contact % 8] = newContact;
  _contacts[_num_of_contact].added = true;
  _num_of_contact++;
}

void	PrintRightFormat(std::string attr){
	std::cout << std::setw(10);
	if (attr.length() > 10)
		std::cout << attr.substr(0, 9) + ".";
	else
		std::cout << attr;
}

void PhoneBook::searchContact() const {

  std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
  std::cout << "|  Index   |First name| Last name| Nickname |" << std::endl;
	std::cout << "|══════════|══════════|══════════|══════════|" << std::endl;
  for (int i = 0; i < 8 && _contacts[i].added == true; i++) {
	
    std::cout << std::setw(10) << i + 1;
    PrintRightFormat(_contacts[i].getFirstName());
    PrintRightFormat(_contacts[i].getLastName());
    PrintRightFormat(_contacts[i].getNickName());
	  std::cout << std::endl;
    if ((i + 1) != _num_of_contact)
      std::cout << "|══════════|══════════|══════════|══════════|" << std::endl;
    else
      std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
      
  }

  //displayContact();
}


void PhoneBook::displayContact() const {
 
	/*std::cout << "First name: " << _firstName << std::endl;*/
	/*std::cout << "Last name: " << _lastName << std::endl;*/
	/*std::cout << "Nickname: " << _nickName << std::endl;*/
	/*std::cout << "Phone number: " << _phoneNumber << std::endl;*/
	/*std::cout << "Darkest secret: " << _darkestSecret << std::endl;*/
  
  std::cout << "display founded contact" << std::endl;
  std::cout << _contacts[0].getFirstName() << std::endl;
  std::cout << _contacts[0].getLastName() << std::endl;
  std::cout << _contacts[0].getNickName() << std::endl;
  std::cout << _contacts[0].getPhoneNumber () << std::endl;
  std::cout << _contacts[0].getDarkestSecret() << std::endl;
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
