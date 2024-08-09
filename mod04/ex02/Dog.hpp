/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:21 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/08 15:17:11 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#define DogSound "   WOOf ! WOOf !"

#include "Brain.hpp"
#include "Animal.hpp"

class Dog :public AAnimal {

    public:

      Dog();
      Dog(const Dog &oldDog);
      Dog &operator=(const Dog &oldDog);
      virtual ~Dog();

      void makeSound() const;
      void setIdeasBrain(int index, std::string idea);
      std::string getIdeasBrain (int index) const;


    private :

      Brain* _dogBrain;
};

#endif
