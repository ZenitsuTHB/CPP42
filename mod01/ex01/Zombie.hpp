/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:48:21 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 19:01:52 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	
	public:
		Zombie();
		~Zombie( void );

		void announce ( void );
		void setName(std::string name);
	
	private:

		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif

