/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learnIt.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 04:14:40 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 04:54:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int  main() {

	//If you want to specify the size the vector is going to be
	std::vector<int> vec(7);
	for(unsigned long i = 0; i < 7; ++i)
		vec.push_back(i * 10);
	std::vector<int>::iterator it;
	for(it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " \n";
	return 0;

}
/*
int main() {

	//IF you want to use array to do the assignements
	//std::vector<int> vec;
	//int arr[] ={1,2,3,4,5,5,6};
	//vec.assign(arr, arr + 7);	
	//IF you just want to specify the size manually
	//std::vector<int> vec;
	//for(unsigned long i = 0; i < 7; ++i)
	//	vec.push_back(i);

	std::vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << " ";
	}
	return 0;
}*/
