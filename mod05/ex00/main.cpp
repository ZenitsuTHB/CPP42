/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/25 12:43:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat numberOne("nameOne", 0);
        Bureaucrat numberTwo("nameTwo", 151);
        Bureaucrat numberThree("name", 150);
    }
    catch (std::exception & e)
    {
      std::cout << Exception << e.what() << std::endl;
    }

  
    try {
      Bureaucrat test("Testy", 7);
      Bureaucrat testTooHigh("Testy", 1);
      test.incrementGrade();
      Bureaucrat testTooLow("Testy", 150);
      test.decrementGrade();
    }
    catch (const std::exception&) {

      std::cout << e.what() << endl;
    }
    std::cout << test << endl;

    return 0;
}