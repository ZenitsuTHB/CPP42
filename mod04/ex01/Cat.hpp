/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:10:02 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 16:41:12 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#define CatSound "   MEOW ! MEOW !"

#include "Brain.hpp"
#include "Animal.hpp"

class Cat :public Animal {

    public:

        Cat();
        Cat(const Cat &oldCat);
        Cat &operator=(const Cat &oldCat);
        virtual ~Cat();

        void makeSound() const;


    private:

        Brain* _catBrain;
};

#endif
