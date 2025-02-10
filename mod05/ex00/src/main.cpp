/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/10 14:37:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat numberOne("nameOne", 1);
        std::cout << numberOne << std::endl;
        Bureaucrat numberTwo("nameTwo", 150);
        std::cout << numberTwo << std::endl;
        Bureaucrat numberThree("name", 151);
        std::cout << numberThree << std::endl;
    }
    catch (std::exception & e)
    {
      std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.incrementGrade(); // Should throw GradeTooHighException
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat jim("Jim", 151); // Should throw GradeTooLowException
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
