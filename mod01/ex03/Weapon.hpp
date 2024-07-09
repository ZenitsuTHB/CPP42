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

class Weapon{
public:

  Weapon(std::string type);
  ~Weapon();

  const std::string& getType();
  void setType(std::string type);

private:

  std::string _type;

};

#endif
