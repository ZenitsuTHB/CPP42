/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintConversions.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 00:58:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/17 00:58:27 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTCONVERSIONS_HPP
# define PRINTCONVERSIONS_HPP

# include <cstdlib>
# include <sstream>
# include <cmath>
# include <limits>
# include "../header/IsLiteral.hpp"

# define __INT_MIN__ -2147483648

bool isPrintable(const std::string& literal);

void printConversionInt(const std::string literal);
void printConversionChar(const std::string literal);
void printConversionFloat(const std::string literal);
void printConversionDouble(const std::string literal);
void printConversionPseudo(const std::string literal);

# endif
