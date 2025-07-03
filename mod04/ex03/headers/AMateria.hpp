/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:57:10 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:17:20 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

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
        virtual void use(ICharacter& target);

        const std::string& getType() const; //Returns the materia type
};

#endif
