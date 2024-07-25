/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:39:23 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/25 12:39:30 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main () {


  std::cout << std::endl;

  // ClapTrap Player0("Black Panther");
  // Player0.attack("Injustice");
  // ClapTrap Player1 = Player;
  // Player1.attack("TeamEVILS");

  ScavTrap Player( "DERIVER" );
  Player.attack( "-REVIRED-" );
  ScavTrap Player1(Player);
  Player1.attack("Tomatoes");
  Player.guardGate();
  Player1.guardGate();
  ScavTrap Popo;

  Popo = Player1;

  std::cout << std::endl;
  return 0;
}
