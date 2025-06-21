/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/19 17:01:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
    BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
    ~BrickWall() {}
    BrickWall *clone() const { return new BrickWall; }
};

#endif

