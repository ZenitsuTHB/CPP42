/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:18:15 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 10:18:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main () {


  std::cout << std::endl;

  // ClapTrap Player0("Black Panther");
  // Player0.attack("Injustice");
  // ClapTrap Player1 = Player;
  // Player1.attack("TeamEVILS");

   ScavTrap Player( "DERIVER" );
  // Player.attack( "-REVIRED-" );
   ScavTrap Player1(Player);
  // Player1.attack("Tomatoes");
  // Player.guardGate();
  Player1.guardGate();
  
  FragTrap Player2( "Player 2" );
  Player2.attack( "Whatever" );
  FragTrap Player3( "Player 3" );
  
  FragTrap Player4;

  Player4 = Player3;

  Player4.highFivesGuys();

  std::cout << std::endl;
  return 0;
}
