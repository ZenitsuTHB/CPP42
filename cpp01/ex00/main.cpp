//$"42 HEADER"


#include "Zombie.hpp"

int main () 
{
  
 // Zombie( "Lazaro" );
  
  Zombie* newZomObj = newZombie( "Archly" );
  delete  (newZomObj);

  randomChump( "randomChump" );

  return (0);
}
