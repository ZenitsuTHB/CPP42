/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:48:37 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 19:03:56 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++) {
	
		zombies[i].setName(name);
	}

	return (zombies);
}
