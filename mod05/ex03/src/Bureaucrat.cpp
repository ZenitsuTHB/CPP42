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
  return ("Exception : Bureaucrat Grade  is Too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return("Exception : Bureaucrat Grade is Too Low !");
}

void Bureaucrat::signAForm(AForm& form)
{
    try {
     
      form.beSigned(*this);
      std::cout << *this << " signed " << form << std::endl;
    } catch (const std::exception& e) {
      
      std::cerr << *this << " couldn't sign " << form 
                << "because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
  //if(form.isSigned() && _grade < form.getGradeToExecute())
  //{
    try {

      form.execute(*this);
      std::cout << *this << ", executed " << form << std::endl;
    }
    catch (const std::exception& e) {
      
      std::cerr << *this << ", couldn't execute" << form << "because" << e.what() <<'\n';
    }
  //else
    //std::cout << *this << " couldn't execute " << form << '\n';
  //catch(const std::exception& e) {
  //
  //    std::cerr << *this << "Could not executed" << form 
  //            << "because " << e.what() << '\n';
  //}
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& cog)
{
  out << std::endl << cog.getName() <<", bureaucrat grade : "<< cog.getGrade();
  return (out);
} 

Bureaucrat::~Bureaucrat() {}
