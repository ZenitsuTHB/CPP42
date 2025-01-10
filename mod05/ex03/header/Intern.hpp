/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:20:44 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/08 19:20:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Bureaucrat;
class Intern
{
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();

        AForm *makeForm(std::string formName, std::string target);

        class FormDoesNotExistException : public std::exception
        {
            public:
                //FormDoesNotExistException() throw();
                
                //virtual ~FormDoesNotExistException() throw();  // Virtual destructor
                const char* what() const throw();  // Overriding std::exception's what()
        };
};

#endif