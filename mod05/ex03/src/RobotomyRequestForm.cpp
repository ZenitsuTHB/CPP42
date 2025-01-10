/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:30:14 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/10 12:39:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : 
AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
AForm(copy), _target(copy._target) {
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
 
    if (this != &copy) {
        AForm::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "TRRRRRRRRRRRTRRR ... !*drilling noises*!\n";
    std::srand(std::time(0));
    int random_number = rand() % 2;
    if (random_number == 0)
        std::cout << "Good NEWS ! " << _target << " has been Robotomized Successfully !\n";
    else
        std::cout << "HO oh ! The Robotomization of " << _target << " has failed !\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {}
