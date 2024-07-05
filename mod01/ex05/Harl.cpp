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

  string field[] = {"DEBUG","INFO","WARNING","ERROR"};

  for (int i = 0; i < 4; i++) {

    if (field[i] == level)
      (this->*(_comments[i]))();
  }
}

void Harl::_debug(void) {

  cout << "I love having extra bacon for my 7XL-double-cheese-";
  cout << "triple-pickle-specialketchup burger. I really do!" << endl;
}


void Harl::_info( void ) {

  cout << "I cannot believe adding extra bacon costs more money. ";
  cout << "You didn’t put enough bacon in my burger! If you did, ";
  cout << "I wouldn’t be asking for more!" << endl;

}

void Harl::_warning( void ) {

  cout << "I think I deserve to have some extra bacon for free. I’ve been coming ";
  cout << "for years whereas you started working here since last month." << endl;

}
  
void Harl::_error( void ) {

  cout << "This is unacceptable! I want to speak to the manager now." << endl;

}

