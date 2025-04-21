/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 05:15:50 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/16 14:58:24 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>                                                                                                                                
#include <list>                                                                                                                                  
#include <vector>                                                                                                                                  
#include "../header/easyfind.hpp"

void	printer(int i){
	
	std::cout << i << " ";
}

int main() {
	
	std::vector<int>	vec;
	std::list<int>		lst(7);

	int arr[] = {2,3,4,5,6,7,8,9};
	vec.assign(arr, arr + 8);
	for(unsigned long i = 0; i < 7; ++i)
		lst.push_back(i + 7);
	std::cout << "\nVector's elements : ";
	std::for_each(vec.begin(), vec.end(), printer);
	std::cout << "\n\nList's elements : ";
	std::for_each(lst.begin(), lst.end(), printer);
	try{
		std::cout << "\n\nFirst occurence of 7 in vec : " << *easyfind(vec, 7) << "\n";
		std::cout << "\n\nFirst occurence of 777 in vec : " << *easyfind(vec, 777) << "\n";
	}
	catch(std::exception & e) {
		
		std::cerr << e.what() << "\n"; 
	}

	try{
		std::cout << "\nFirst occurence of 7 in list : " << *easyfind(vec, 7) << "\n";
		std::cout << "\nFirst occurence of 777 in list : " << *easyfind(vec, 777) << "\n";
	}
	catch(std::exception & e) {
		
		std::cerr << e.what() << "\n"; 
	}
        return 0;                                                                                                                                  
}                
