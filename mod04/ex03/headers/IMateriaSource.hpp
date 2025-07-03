/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:41:59 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/30 16:43:38 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIASOURCE_HPP
# define _IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

    public:

      virtual ~IMateriaSource() {}
      virtual void learnMateria(AMateria*) = 0;
      virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
