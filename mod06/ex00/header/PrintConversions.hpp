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

# include "../header/IsLiteral.hpp"

void printConversionInt(int i);
void printConversionChar(char c);
void printConversionFloat(float f);
void printConversionDouble(double d);

bool isPrintable(const std::string& literal);

# endif