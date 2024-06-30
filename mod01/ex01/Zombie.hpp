//42 HEADER

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

#include <string>
#include <iostream>

using namespace std;

class Zombie {
public:
  Zombie(std::string name);
  ~Zombie( void );

  void announce ( void );

private:

  std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif

