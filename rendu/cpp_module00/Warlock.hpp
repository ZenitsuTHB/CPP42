#pragma once 

#include <string>
#include <iostream>

class Warlock {

  private:
    std::string _name;
    std::string _title;

    Warlock(const Warlock&);
    Warlock& operator = (const Warlock&);

  public:
  
    ~Warlock();
    Warlock(std::string name, std::string title);

    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void setTitle(const std::string&);
    void introduce() const;   


};
