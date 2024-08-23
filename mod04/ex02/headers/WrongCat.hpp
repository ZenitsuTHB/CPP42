/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:11:26 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 13:11:34 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#define WrongCatSound "....MIAOU from WrongCat....."

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal {

    public:

        WrongCat();
        WrongCat(const std::string &type);
        WrongCat(const WrongCat &oldWrongCat);
        WrongCat &operator=(const WrongCat &oldWrongCat);
        virtual ~WrongCat();

        std::string getType() const;
        void makeSound() const;
    protected:

      std::string _type;

};

#endif
