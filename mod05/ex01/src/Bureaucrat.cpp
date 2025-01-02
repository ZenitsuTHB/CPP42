/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 18:32:39 by marvin            #+#    #+#             */
/*   Updated: 2024/12/28 21:34:28 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade > lowestGrade)
      throw GradeTooHighException();
    else if (grade < highestGrade)
      throw GradeTooHighException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}
        
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{	
    _name = other._name;
		_grade = other._grade;
	}
	return (*this);
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
  return ("Exception : Grade  is Too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return("Exception : Grade is Too Low !");
}

void Bureaucrat::signForm(Form& form)
{
    try {
        form.beSigned(*this); // Attempt to sign the form
        std::cout << _name << " signed " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << _name << " couldn't sign " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}
 
Bureaucrat::~Bureaucrat() {}
