/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/07 21:59:20 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RobotomyRequestForm.hpp" 
#include "../header/ShrubberyCreationForm.hpp" 
#include "../header/PresidentialPardonForm.hpp" 

int main ()
{        

    /* try {
        Bureaucrat john("John", 136);
        ShrubberyCreationForm form("Test1");

        std::cout << form << std::endl;
        john.signAForm(form);
        form.execute(john);

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    } */
    
    /* try {
        Bureaucrat john("John", 48);
        RobotomyRequestForm form("Robot");

        std::cout << form << std::endl;
        john.signAForm(form);
        //form.execute(john);
        john.executeForm(form);

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    } */

    try
    {
        Bureaucrat john("john", 77);
        PresidentialPardonForm form("Johnny");
        john.executeForm(form);        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
