//42 HEADER



# include "Zombie.hpp"

int main (int argc, char* argv[])
{
  (void)argv;
  if (argc > 1)
    return (0);

  int N;
  cout << std::endl;
  cout << "Enter the number of Zombie";
  cout << " you'd like to create" << std::endl;
  cin >> N;
  if (N < 1 || N > 10)
  {
    std::cout << "Your max number is 10 and min is 1" << std::endl;
    return (1);
  }

  Zombie* theHorde;
  theHorde = zombieHorde (N, "Horde");

  for (int i = 0; i < N; i++) {
   theHorde[i].announce();
  }
  
  delete[] theHorde;
  return (0);
}
