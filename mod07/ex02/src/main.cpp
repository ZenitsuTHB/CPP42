/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:18:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/07 13:35:50 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../header/.Array1stWay.hpp"
#include "../header/Array.hpp"
#include <iostream>



int main()
{
    Array<int> arr(5);
    Array<int> arr2(5);

    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = i;
    for (unsigned int i = 0; i < arr2.size(); i++)
        arr2[i] = i + 5;

    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    for (unsigned int i = 0; i < arr2.size(); i++)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;

    Array<int> arr3(arr2);
    for (unsigned int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    arr3 = arr;
    for (unsigned int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    try
    {
        arr[5] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;    
}
