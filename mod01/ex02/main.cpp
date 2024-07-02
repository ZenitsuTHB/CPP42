/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:49:57 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 13:50:01 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

using namespace std;
  

int main (int argc, char *argv[]) {

  (void)argv;

  if (argc > 1)
    return (0);

  string theString = "HI THIS IS BRAIN";
  string *stringPTR = &theString;
  string& stringREF = theString;

  cout << endl;
  cout << "The memory address of theString is : " << &theString << endl;
  cout << "The memory address of stringPTR is : " << stringPTR << endl;
  cout << "The memory address of stringREF is : " << &stringREF << endl;

  cout << endl;
  cout << "The Value of theString is : " << theString << endl;
  cout << "The Value of stringPTR is : " << *stringPTR << endl;
  cout << "The Value of stringREF is : " << stringREF << endl;



  
  return 0;
}
