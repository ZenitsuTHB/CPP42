/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:34 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/18 13:55:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Brain.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/WrongAnimal.hpp"

# define LEN 5

int main() 
{
  //will output the Wrongcat sound! if the makeSound
  //method is virtual otherwise it will ouput the WrongAnimal sound

  const WrongAnimal* meta = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();    
    delete meta;


    //const Animal* j = new Dog();
    //const Animal* i = new Cat();

	// Dog basic;
	// Dog tmp = basic;
	// std::cout << "test ---> " << tmp.getIdeasBrain(1) << std::endl;
   
	//    Animal*  animals[LEN];
	//
	//    for (int  i = 0; i < LEN; i++) {
	//
	//      if (i % 2 != 0) {
	//
	//
	//        animals[i] = new Dog(); 
	//        std::cout << std::endl;
	//       ((Dog*)(animals[i]))->setIdeasBrain(i, "A Dog Business will be fine !");
	//        std::cout << "this is Dog' s ideas" << std::endl;
	//        std::cout << ((Dog*)(animals[i]))->getIdeasBrain(i) <<  std::endl;
	//
	//      }
	//   else {
	//
	//      animals[i] = new Cat();
	//      std::cout << std::endl;
	//      ((Cat*)(animals[i]))->setIdeasBrain(i, "A Cat Restaurant will be Amazing !");
	//      std::cout << "this is cat' s ideas" << std::endl;
	//
	//      std::cout << ((Cat*)(animals[i]))->getIdeasBrain(i) <<  std::endl;
	//   }
	//   std::cout << std::endl;
	//   std::cout << "I am a [ " << (animals[i])->getType() << " ]" << std::endl;
	//   (animals[i])->makeSound();
	//
	//   std::cout << std::endl;
	//    }
	// for (int i = 0; i < LEN; i++) {
	//
	// 	delete animals[i];
	// }
   // delete j;
   // delete i;
    return 0;
}
