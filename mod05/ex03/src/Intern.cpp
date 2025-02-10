/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:28:29 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/10 14:56:51 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) { *this = copy; }

Intern &Intern::operator=(const Intern &copy) { (void)copy; return (*this); }

AForm *Intern::makeForm(std::string formName, std::string target) {

    if (formName == "shrubbery creation")
        return new ShrubberyCreationForm(target);
    else if (formName == "robotomy request")
        return new RobotomyRequestForm(target);
    else if (formName == "presidential pardon")
        return new PresidentialPardonForm(target);
    else
        throw Intern::FormDoesNotExistException();
}

/* Intern::FormDoesNotExistException::FormDoesNotExistException() throw() {

    std::cout << "Form does not exist \n";
}
 */

const char *Intern::FormDoesNotExistException::what() const throw() {

    return ("Form Name does not exist");
}

Intern::~Intern() {}
