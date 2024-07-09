//42 HEADER



#include "Harl.hpp"


Harl::Harl() { 

  _comments[0] = (&Harl::_debug);
  _comments[1] = (&Harl::_info);
  _comments[2] = (&Harl::_warning);
  _comments[3] = (&Harl::_error);

  return ;
}

Harl::~Harl( void ) {

  return ;
}


void Harl::complain( std::string level ) {

  std::string field[] = {"DEBUG","INFO","WARNING","ERROR"};

  for (int i = 0; i < 4; i++) {

    if (field[i] == level)
      (this->*(_comments[i]))();
  }
}

void Harl::_debug(void) {

  std::cout << "I love having extra bacon for my 7XL-double-cheese-";
  std::cout << "triple-pickle-specialketchup burger. I really do!" << std::endl;
}


void Harl::_info( void ) {

  std::cout << "I cannot believe adding extra bacon costs more money. ";
  std::cout << "You didn’t put enough bacon in my burger! If you did, ";
  std::cout << "I wouldn’t be asking for more!" << std::endl;

}

void Harl::_warning( void ) {

  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
  std::cout << "for years whereas you started working here since last month." << std::endl;

}
  
void Harl::_error( void ) {

  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

