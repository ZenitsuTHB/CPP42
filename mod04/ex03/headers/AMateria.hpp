/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:57:10 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/24 19:55:38 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class 

class AMateria
{
    protected:

      std::string _type;

    public:

        AMateria();
        AMateria(std::string const  &type);
        AMateria(const AMateria &);
        AMateria& operator=(const AMateria&);
        virtual ~AMateria();

        virtual AMateria* clone() const = 0;
        std::string const & getType() const; //Returns the materia type
        virtual void use(ICharacter& target);
};

#endif
