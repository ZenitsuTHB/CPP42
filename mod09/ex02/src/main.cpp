/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:44:06 by avolcy            #+#    #+#             */
/*   Updated: 2025/07/04 00:05:45 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../header/PmergeMe.hpp"

int main (int argc, char *argv[])
{
    if (argc < 2)
        return(std::cerr << "There s not enough elements to sorted", 1);
    try
    {
        PmergeMe sorter(argv[1]);

        //Parse and load the datas from input
        sorter.printData(sorter.getVector(), 1);
        //launch the timer
        //call the mergevector
        //call the mergedqueue
        //print the ouput following the model
        //sorter.printData(_vec, 2);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
