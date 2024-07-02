/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:45:52 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:45:57 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main () 
{
  
 // Zombie( "Lazaro" );
  Zombie* newZomObj = newZombie( "avolcy" );
  delete  (newZomObj);

  randomChump( "randomChump" );

  return (0);
}
