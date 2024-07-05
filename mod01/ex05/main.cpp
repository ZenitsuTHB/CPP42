//42 HEADER



#include "Harl.hpp"


int main ()
{
  Harl isRobot;
  string test[] = {"DEBUG","INFO","WARNING","ERROR","TEST"};

  for (int i = 0; i < 5; i++) {

    isRobot.complain(test[i]);
    
  }
}
