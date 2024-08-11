/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:09:09 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:09:19 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define WrongAnimalSound "....annoying silence....."

#include <string>
#include <iostream>

class WrongAnimal {

    public:

        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &oldWrongAnimal);
        WrongAnimal &operator=(const WrongAnimal &oldWrongAnimal);
        virtual ~WrongAnimal();

        std::string getType() const;
        virtual void makeSound() const;
    protected:

        std::string _type;
};

#endif
