/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:50:41 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:50:47 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
# define _HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
  HumanA(std::string name, Weapon& _bazuka);
  ~HumanA();

  void attack();

private:

  std::string _name;
  Weapon& _bazuka;
  
};

#endif
