/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:46:43 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:46:49 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _Zombie_HPP
# define _Zombie_HPP

# include <string>
# include <iostream>

class Zombie {

public:
  Zombie(std::string name);
  ~Zombie( void );

  void announce( void );

private:
  std::string _name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
