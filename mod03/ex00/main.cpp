/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:16:26 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 10:16:33 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () {


  std::cout << std::endl;

  ClapTrap Player("Black Panther");
  Player.attack("Injustice");
  ClapTrap Player1 = Player;
  Player1.attack("TeamEVILS");
  Player.attack("Injustice");
  Player.beRepaired(8);
  Player.attack("Injustice");
  Player.beRepaired(2);
  
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.attack("Injustice");
  Player.beRepaired(2);
  std::cout << std::endl;
  return 0;
}
