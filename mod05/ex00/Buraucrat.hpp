/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/11 21:52:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        int         _grade;
        std::string _name;e

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();

        int     setGrade(int grade);
        void    incrementGrade();
        void    decrementGrade();
        std::string getName();
        int         getGrade();
        
};

std::cout << getName() <<", bureaucrat grade " << getGrade() << std::endl;
Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    _name = name;
    if (grade > 150)
        throw ();
}


Bureaucrat::GradeTooHighException()
{
  throw("Exception : Grade  is Too High");
}

Bureaucrat::GradeTooLowException()
{
  throw("Exception : Grade is Too Low");
}
 
Bureaucrat::~Bureaucrat()
{
}

#endif
