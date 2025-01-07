/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:50:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/07 22:00:14 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : 
AForm("Presidential Pardon Form", 25, 5), _target(target) {}

void    PresidentialPardonForm::execute(const Bureaucrat & executee) const
{
    (void)executee;
    std::cout << '\n' << _target << " has been pardon by Zaphod Beeblebrox.\n";  
}

PresidentialPardonForm::~PresidentialPardonForm() {}
