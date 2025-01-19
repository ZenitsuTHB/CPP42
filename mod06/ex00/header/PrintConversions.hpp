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
# include "../header/IsLiteral.hpp"

void printConversionChar(char c);
void printConversionInt( const std::string literal);
void printConversionFloat(const std::string literal);
void printConversionDouble(const std::string literal);

bool isPrintable(const std::string& literal);

# endif