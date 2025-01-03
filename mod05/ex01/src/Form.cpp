/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:20:03 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 15:48:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Form.hpp"

Form::Form() {}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name) {
	
	if (gradeToSign < highestGrade || gradeToExecute < highestGrade)
		throw GradeTooHighException();
	if (gradeToSign > lowestGrade || gradeToExecute > lowestGrade)
		throw GradeTooLowException();
	_isSigned = false;
	_gradeToSign = gradeToSign;
	_gradeToExecute = gradeToExecute;
}
        
Form::Form(const Form& other) {

	*this = other;
}
        
Form& Form::operator=(const Form& other) {

	if (this != &other)
	{
		_name = other.getName();
		_isSigned = other._isSigned;
    	_gradeToSign= other._gradeToSign;
    	_gradeToExecute = other._gradeToExecute;
	}
	return (*this);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    _isSigned = true;
}

bool	Form::isSigned() const { return (_isSigned); }

std::string	Form::getName() const { return (_name); }

int	Form::getGradeTosign() const { return (_gradeToSign); }

int	Form::getGradeToExecute() const { return (_gradeToExecute); }

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception : Form Grade is too high !");
}

const	char* Form::GradeTooLowException::what() const throw ()
{
	return ("Exception : Form Grade is too Low !");
}

std::ostream& operator<<(std::ostream& out, const Form& current)
{
	out << "\nForm named : " << current.getName() 
		<< "\nForm status : " << (current.isSigned() ? "signed" : "not signed")
		<< "\nRequired grade to Sign : " << current.getGradeTosign() 
		<< "\nRequired grade to Execute : " << current.getGradeToExecute() << std::endl;
	return (out);
}

Form::~Form() {}
