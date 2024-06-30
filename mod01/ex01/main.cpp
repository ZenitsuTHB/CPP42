//42 HEADER



# include "Zombie.hpp"

int main ()
{
  /*cout << "Enter the number of Zombie";*/
  /*cout << "you'd like to create" << std::endl;*/
  /*getline(cin, N);*/
  int N = 3;
  Zombie* theHorde = zombieHorde (N, "Horde");

  /*for (int i = 0; i < N; i++) {
  }*/
    delete[] theHorde;
}
