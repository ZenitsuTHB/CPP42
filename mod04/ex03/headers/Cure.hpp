/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:54:11 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:25:42 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP
# define _CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {

    public:

      Cure();
      Cure(const Cure &);
      Cure &operator=(const Cure &);
      virtual ~Cure();

      Cure * clone() const;
      void use(ICharacter&) const;

  
};

#endif
