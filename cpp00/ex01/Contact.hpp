//42 HEADER


#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <cstdlib>
# include <iomanip>
# include <iostream>

class Contact
{
  public:
    Contact();
    ~Contact();

    bool        added;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
    void setUserData(const std::string& fName, const std::string& lName,
       const std::string& nName, const std::string& pNum, const std::string& dSecret);
  
  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif
