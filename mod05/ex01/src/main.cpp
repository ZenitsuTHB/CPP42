/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:39 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/02 23:13:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Form.hpp"
#include "../header/Bureaucrat.hpp"

int main ()
{
   // Form a("test", 3, 2);

     try {
        Bureaucrat john("John", 50);
        Form taxForm("Tax Form", 30, 20);

        std::cout << taxForm << std::endl;

        john.signForm(taxForm); // Should throw an exception (GradeTooLow)
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
