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

#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/WrongAnimal.hpp"

int main() 
{
    const Animal* meta = new Animal();
    std::cout << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl;
   const Animal* i = new Cat();
    // const WrongAnimal* i = new WrongCat();

    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    std::cout << std::endl;
    j->makeSound();
    std::cout << std::endl;
    meta->makeSound();
    std::cout << std::endl;

    //...more tests
    delete meta;
    delete j;
    delete i;

    return 0;
}
