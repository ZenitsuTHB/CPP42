/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:34 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:10:39 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() 
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
   
    Animal*  animals[6];

    for (int  i = 0; i < 6; i++) {

      if (1 % 2 != 0) {

        animals[i] = new Dog()  
      }
     animals[i] = new   
    } 

    delete j;//should not create a leak
    delete i;

    return 0;
}
