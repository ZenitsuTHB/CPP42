/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/04/22 00:30:25 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include  "ATarget.hpp"

#include <string>
#include <iostream>
#include "ATarget.hpp"
class Dummy : public ATarget {

  public:
  
    Dummy() : ATarget("Target Practice Dummy"){}
    virtual ~Dummy(){}

    ATarget* clone() const {

      return new Dummy();
    }
};
