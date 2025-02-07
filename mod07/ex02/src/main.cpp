/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:18:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/07 23:45:40 by avolcy           ###   ########.fr       */
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

    //copy constructor 
    Array<int> arr3(arr2);
    for (unsigned int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    //copy assignement operator
    arr3 = arr;
    for (unsigned int i = 0; i < arr3.size(); i++)
        std::cout << arr3[i] << " ";
    std::cout << std::endl;

    try {
	    arr[5] = 42;
    }
    catch (std::exception &e) {

        std::cout << e.what() << std::endl;
    }
    
    Array<std::string> strArray(10);
    std::ostringstream str;
    try {
	    for (unsigned int i = 0; i < strArray.size(); i++) {
		    str << i;
		    strArray[i] = "string " + str.str();
		    str.str("");
		    str.clear();
	    }
	    
	    Array<std::string> cpyArray(strArray);
	    Array<std::string> cpyArray2 = strArray;
	    std::cout << "strArray: " << strArray[1] << std::endl;
	    std::cout << "strArray: " <<strArray[9] << std::endl;
	    std::cout << "cpyArray: " << cpyArray[1] << std::endl;
	    std::cout << "cpyArray: " << cpyArray[9] << std::endl;
	    std::cout << "cpyArray2: " << cpyArray2[1] << std::endl;
	    std::cout << "cpyArray2: " << cpyArray2[9] << std::endl;
	    std::cout << strArray[10] << std::endl;
    }
    catch (const std::exception& e) {
	    std::cerr << e.what() << std::endl;
    }
    return 0;    
}
