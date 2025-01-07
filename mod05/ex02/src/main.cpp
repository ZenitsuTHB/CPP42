/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 15:51:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AForm.hpp"
#include "../header/Bureaucrat.hpp"

int main ()
{        

     try {
        Bureaucrat john("John", 5);
        AForm taxAForm("Tax AForm", 30, 20);

        //std::cout << taxAForm << std::endl;

        john.signAForm(taxAForm); // Should throw an exception (GradeTooLow)
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
