/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:31:23 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/18 19:46:05 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( ) {

  int mode;


  while (1) {

    std::cout << std::endl;
    std::cout << "Enter command (1) to run in Default mode" << std::endl;
    std::cout << "Enter command (2) to run in Interactive mode" << std::endl;
    std::cin>>mode;

    if (mode < 1 || mode > 2)
      return(std::cerr << "Sorry ! command doesn't exist" << std::endl, 127);
    else if (mode == 2)
    {
	    std::cout << std::endl;
	    std::cout << "__________________BSP Interactive tests___________________"<< std::endl;
	    std::cout << std::endl;

      int nbr;
      int arr[8];
      Fixed arrObject[8];
      Point arrOfObjectPoint[4];
      std::string coord[] = {"xA", "yA", "xB", "yB", "xC", "yC","xP","yP"};

      for (int i = 0; i < 8 ; i++) {

        std::cout << "Please Enter the coordonates" << std::endl;
        std::cout << coord[i] << " : ";
        std::cin>>nbr;
        arr[i] = nbr;
        std::cout << "array[" << i << "] -> "<< arr[i] << std::endl;
      }
      Fixed arrObject[0](arr[0]);
      // arrObject[1](arr[1]);
      // arrObject[2](arr[2]);
      // arrObject[3](arr[3]);
      // arrObject[4](arr[4]);
      // arrObject[5](arr[5]);
      // arrObject[6](arr[6]);
      // arrObject[7](arr[7]);
      Point A( arrObject[0], arrObject[1] );
      Point B( arrObject[2], arrObject[3] );
      Point C( arrObject[4], arrObject[5] );
      Point P( arrObject[6], arrObject[7] );

      std::cout << "The point A coordonates Overloaded are : ( " << A << " )" << std::endl;
      std::cout << "The point B coordonates Overloaded are : ( " << B << " )" << std::endl;
      std::cout << "The point C coordonates Overloaded are : ( " << C << " )" << std::endl;
      std::cout << "The point P coordonates Overloaded are : ( " << P << " )" << std::endl;
	    std::cout << std::endl;

      if (bsp(A, B, C, P))
        std::cout << "The Point P(Xp, Yp), lies inside of the triangle formed by ABC" << std::endl;
      else
        std::cout << "The Point P(Xp, Yp), isn't lying inside of the triangle formed by ABC" << std::endl;
      break ;
    }
    else
    {
      std::cout << std::endl;
	    std::cout << "__________________BSP Default tests___________________"<< std::endl;
	    std::cout << std::endl;

      Fixed Xa(0);
      Fixed Ya(0);
      Fixed Xb(20);
      Fixed Yb(0);
      Fixed Xc(10);
      Fixed Yc(30);
      Fixed Xp(10);
      Fixed Yp(15);
     
      Point A( Xa, Ya );
      Point B( Xb, Yb );
      Point C( Xc, Yc );
      Point P( Xp, Yp );
      //Overload the insertion operator for Point if you rememberPoint
      //Printing the coordonates using an Overloaded insertion
      std::cout << "The point A coordonates Overloaded are : ( " << A << " )" << std::endl;
      std::cout << "The point B coordonates Overloaded are : ( " << B << " )" << std::endl;
      std::cout << "The point C coordonates Overloaded are : ( " << C << " )" << std::endl;
      std::cout << "The point P coordonates Overloaded are : ( " << P << " )" << std::endl;
	    std::cout << std::endl;
      if (bsp(A, B, C, P))
        std::cout << "The Point P(Xp, Yp), lies inside of the triangle formed by ABC" << std::endl;
      else
        std::cout << "The Point P(Xp, Yp), isn't lying inside of the triangle formed by ABC" << std::endl;
      break ;
    }
  }
  std::cout << std::endl;
  return 0;
}
