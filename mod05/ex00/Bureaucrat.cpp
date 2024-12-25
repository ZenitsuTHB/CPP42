/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:32:39 by marvin            #+#    #+#             */
/*   Updated: 2024/12/24 18:32:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, const Bureaucrat& cog)
{
  out << cog.getName() <<", bureaucrat grade" << cog.getGrade();
  return (out);
} 

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    _name = name;
    if (grade > lowestGrade)
      throw GradeTooHighException();
    else if (grade < highestGrade)
      throw GradeTooHighException();
    _grade = grade;
}

void Bureaucrat::incrementGrade()
{
  if (getGrade() > highestGrade)
    _grade = _grade - 1;
  throw GradeTooHighException();
}

void  Bureaucrat::decrementGrade()
{
  if (getGrade() < lowestGrade)
    _grade = _grade + 1;
  throw GradeTooLowException();
}

std::string Bureaucrat::getName()
{
  return(_name);
}

int Bureaucrat::getGrade()
{
  return (_grade);
}

Bureaucrat::GradeTooHighException()
{
  std::cerr << "Exception : Grade  is Too High" << endl;
}

Bureaucrat::GradeTooLowException()
{
  std::cerr << "Exception : Grade is Too Low" << endl;
}
 
Bureaucrat::~Bureaucrat()
{
}