/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:50:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/10 12:39:00 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : 
AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) :
AForm(copy), _target(copy._target) {
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
    if (this != &copy)
    {
        AForm::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat & executee) const
{
    (void)executee;
    std::cout << '\n' << _target << " has been pardon by Zaphod Beeblebrox.\n";  
}

PresidentialPardonForm::~PresidentialPardonForm() {}
