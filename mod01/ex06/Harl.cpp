/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:04:12 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/16 20:00:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { 

  _comments[0] = (&Harl::_debug);
  _comments[1] = (&Harl::_info);
  _comments[2] = (&Harl::_warning);
  _comments[3] = (&Harl::_error);

  getDebugMap["DEBUG"] = D;
  getDebugMap["INFO"] = I;
  getDebugMap["WARNING"] = W;
  getDebugMap["ERROR"] = E;

  return ;
}

Harl::~Harl( void ) {

  return ;
}

void Harl::complain( std::string level ) {

  Debugging message = getDebugMap[level];

  switch (message) {

    //(this->*_comments[0])(); is the correct syntax to call a member function pointer.
    case D:
      (this->*_comments[0])();
      (this->*_comments[1])();
      (this->*_comments[2])();
      (this->*_comments[3])();
      break;
    case I:
      (this->*_comments[1])();
      (this->*_comments[2])();
      (this->*_comments[3])();
      break;
    case W:
      (this->*_comments[2])();
      (this->*_comments[3])();
      break;
    case E:
      (this->*_comments[3])();
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    break;
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

