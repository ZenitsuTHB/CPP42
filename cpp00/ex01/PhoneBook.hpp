//42 HEADE

#ifndef PHONEBOOK_H
# define PHONEBOOK_H


# include <string>
# include <cstdlib>
# include <cctype>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
  public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact() const;
    void displayContact();
    void farewellMessage() const;
    void greetingsMessage() const;
  
  private:
    Contact _contacts[8];//raw array, c_like

    int   _num_of_contact;
    void  _thePrinter(int index) const;
    std::string _getUserData(std::string input, int flag);
};

# endif
