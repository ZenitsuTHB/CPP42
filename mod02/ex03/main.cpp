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


  Fixed Xa, Ya, Xb, Yb, Xc, Yc, Xp, Yp;

  while (1) {

    std::cout << std::endl;
    std::cout << "Enter command (1) to run in Default mode" << std::endl;
    std::cout << "Enter command (2) to run in Interactive mode" << std::endl;
    std::cin>>mode;

    if (mode < 1 || mode > 2)
      return(std::cerr << "Sorry ! command doesn't exist" << std::endl, 127);
    else if (mode == 2)
    {
      int nbr;
      int arr[8];
      std::string coord[] = {"xA", "yA", "xB", "yB", "xC", "yC","xP","yP"};

      for (int i = 0; i < 8 ; i++) {

        std::cout << "Please Enter the coordonates" << std::endl;
        std::cout << coord[i] << " : ";
        std::cin>>nbr;
        arr[i] = nbr;
      }
      Xa = Fixed(arr[0]);
      Ya = Fixed(arr[1]);
      Xb = Fixed(arr[2]);
      Yb = Fixed(arr[3]);
      Xc = Fixed(arr[4]);
      Yc = Fixed(arr[5]);
      Xp = Fixed(arr[6]);
      Yp = Fixed(arr[7]);     
    }
    else {
      Xa = Fixed(0);
      Ya = Fixed(0);
      Xb = Fixed(20);
      Yb = Fixed(0);
      Xc = Fixed(10);
      Yc = Fixed(30);
      Xp = Fixed(10);
      Yp = Fixed(15);
    }
    Point A( Xa, Ya );
    Point B( Xb, Yb );
    Point C( Xc, Yc );
    Point P( Xp, Yp );

    system("clear");
	  std::cout << std::endl;
    if (mode == 1)
	    std::cout << "__________________BSP Default tests___________________"<< std::endl;
    else
	    std::cout << "__________________BSP Interactive tests___________________"<< std::endl;
	  std::cout << std::endl;
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
  std::cout << std::endl;
  return 0;
}
