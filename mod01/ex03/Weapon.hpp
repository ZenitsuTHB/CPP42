/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:51:22 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:51:26 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP
# define _WEAPON_HPP

#include <string>
#include <iostream>

using namespace std;

class Weapon{
public:

  Weapon(string type);
  ~Weapon();

  const string& getType();
  void setType(string type);

private:

  string _type;

};

#endif
