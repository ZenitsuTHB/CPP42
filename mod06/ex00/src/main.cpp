/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 00:12:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/14 00:12:39 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScalarConverter.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
        return(std::cout << "Bad number of arguments !\n", 1);
    ScalarConverter::convert(argv[1]);
    return (0);
}