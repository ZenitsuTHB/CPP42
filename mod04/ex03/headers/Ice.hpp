/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:18:01 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:21:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP
# define _ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria {
    
    public:

      Ice();
      Ice(const Ice &);
      Ice &operator=(const Ice &);
      ~Ice();

      Ice * clone() const;
      void use(ICharacter&) const;
};

#endif