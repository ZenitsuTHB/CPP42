/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:45:52 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/16 16:34:39 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main () 
{
  
 // Zombie( "Lazaro" );
  Zombie* newZomObj = newZombie( "The Evaluator" );
  delete  (newZomObj);

  randomChump( "randomChump" );

  return (0);
}
