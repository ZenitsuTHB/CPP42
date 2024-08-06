/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:21 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:10:25 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#define DogSound "   WOOf ! WOOf !"

#include "Animal.hpp"

class Dog :public Animal {

    public:

      Dog();
      Dog(const Dog &oldDog);
      Dog &operator=(const Dog &oldDog);
      virtual ~Dog();

      void makeSound() const;

    private :

      Brain* _dogBrain;
};

#endif
