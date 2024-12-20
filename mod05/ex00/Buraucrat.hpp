/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/20 17:38:23 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

# define lowestGrade 150
# define highestGrade 1

class Bureaucrat
{
    private:
        int         _grade;
        std::string _name;

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();

        void    incrementGrade();
        void    decrementGrade();
        std::string getName();
        int         getGrade();
        
};

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

int main () {
  
  try {
    Bureaucrat test("Testy", 7);
    Bureaucrat testTooHigh("Testy", 1);
    test.incrementGrade();
    Bureaucrat testTooLow("Testy", 150);
    test.decrementGrade();
  }
  catch (const std::exception&) {

    std::cout << e.what() << endl;
  }
  std::cout << test << endl;

  return 0;
}

#endif
