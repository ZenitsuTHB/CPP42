/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:32:53 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/02 00:32:53 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IDENTIFY_HPP_
#define _IDENTIFY_HPP_

#include "../header/A.hpp"
#include "../header/B.hpp"
#include "../header/C.hpp"
#include "../header/Base.hpp"
#include <cstdlib>

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif