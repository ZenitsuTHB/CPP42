/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:48:01 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:48:10 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main (int argc, char* argv[])
{
  (void)argv;
  if (argc > 1)
    return (0);

  int N;
  std::cout << std::endl;
  std::cout << "Enter the number of Zombie";
  std::cout << " you'd like to create" << std::endl;
  std::cin >> N;
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
