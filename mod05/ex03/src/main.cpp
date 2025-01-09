/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/09 23:29:00 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Intern.hpp"
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

    /* try
    {
        Bureaucrat john("john", 77);
        PresidentialPardonForm form("Johnny");
        john.executeForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } */

    Intern *formula1 = new Intern();
    //Intern* formula1 = new Intern[3] ;
    
    try {
        
        AForm *form = formula1->makeForm("robotomy request", "home");
        std::cout << "Intern Creates : " << *form << '\n';
        form->execute(*new Bureaucrat("John", 1));
        delete form;
    }
    catch (const std::exception &e){
        
        std::cerr << "Couldn't create the form cause " << e.what() << '\n';
    }
    delete formula1;

    return 0;
}
