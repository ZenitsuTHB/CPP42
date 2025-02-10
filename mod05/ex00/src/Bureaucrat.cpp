/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:32:39 by marvin            #+#    #+#             */
/*   Updated: 2025/02/10 14:36:53 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(10) {

  std::cout << "Dfault const for BUR. called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade > lowestGrade)
      throw GradeTooLowException();
    else if (grade < highestGrade)
      throw GradeTooHighException();
    _grade = grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& cog)
{
  out << cog.getName() <<", bureaucrat grade "<< cog.getGrade();
  return (out);
} 

void Bureaucrat::incrementGrade()
{
  if (_grade - 1 < highestGrade)
    throw GradeTooHighException();
  _grade--;
}

void  Bureaucrat::decrementGrade()
{
  if (_grade + 1 > lowestGrade)
    throw GradeTooLowException();
  _grade++;
}

std::string Bureaucrat::getName() const { return(_name); }

int Bureaucrat::getGrade() const { return (_grade); }

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return ("Exception : Grade  is Too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return("Exception : Grade is Too Low");
}
 
Bureaucrat::~Bureaucrat() {}
