/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:24:29 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 17:27:31 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("fwoosh", "fwooshed") {}

ASpell *Fwoosh::clone() const { return new Fwoosh; }

Fwoosh::~Fwoosh() {}
