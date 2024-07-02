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

using namespace std;

class HumanA {
public:
  HumanA(string name, Weapon& _bazuka);
  ~HumanA();

  void attack();

private:

  string _name;
  Weapon& _bazuka;
  
};

#endif
