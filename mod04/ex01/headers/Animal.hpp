/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:09:28 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/08 12:59:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define DefaultSound "....peaceful silence....."

#include <string>
#include <iostream>

class Animal {

    public:

      Animal();
      Animal(const std::string &type);
      Animal(const Animal &oldAnimal);
      Animal &operator=(const Animal &oldAnimal);
      virtual ~Animal();

      virtual void makeSound() const;
      virtual std::string getType() const;

    protected:

      std::string _type;

};

#endif
