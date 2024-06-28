//42HEADER


#include "Contact.hpp"

Contact::Contact() : added(false) { return ; }
Contact::~Contact() { return ; }

std::string Contact::getFirstName () const { return (this->_firstName); }
std::string Contact::getLastName () const { return (this->_lastName); }
std::string Contact::getNickName () const { return (this->_nickName); }
std::string Contact::getPhoneNumber () const { return (this->_phoneNumber); }
std::string Contact::getDarkestSecret () const { return (this->_darkestSecret); }

void Contact::setUserData(const std::string& fName, const std::string& lName, 
    const std::string& nName, const std::string& pNum, const std::string& dSecret) {

  _firstName = fName;
  _lastName = lName;
  _nickName = nName;
  _phoneNumber = pNum;
  _darkestSecret = dSecret;
}
