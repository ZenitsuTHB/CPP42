/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:48:23 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/01 18:13:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : 
AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
AForm(copy) {
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {

    if (this != &copy) {
        AForm::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void   ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    
    std::string fileName = (_target + "_shrubbery");
    std::ofstream outfile;
    outfile.open((fileName).c_str());
    if (outfile.is_open())
    {
        outfile << "       ###\n";
        outfile << "      #o###\n";
        outfile << "    #####o###\n";
        outfile << "   #o#\\#|#/###\n";
        outfile << "    ###\\|/#o#\n";
        outfile << "     # }|{  #\n";
        outfile << "       }|{\n";
        outfile.close();        
    }
    std::cerr << "Error: Could not create file " << _target + "_shrubbery" << std::endl;
 }

ShrubberyCreationForm::~ShrubberyCreationForm() {}



