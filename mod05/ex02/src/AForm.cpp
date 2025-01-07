/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:20:03 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 15:48:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AForm.hpp"

AForm::AForm() {}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name) {
	
	if (gradeToSign < highestGrade || gradeToExecute < highestGrade)
		throw GradeTooHighException();
	if (gradeToSign > lowestGrade || gradeToExecute > lowestGrade)
		throw GradeTooLowException();
	_isSigned = false;
	_gradeToSign = gradeToSign;
	_gradeToExecute = gradeToExecute;
}
        
AForm::AForm(const AForm& other) {

	*this = other;
}
        
AForm& AForm::operator=(const AForm& other) {

	if (this != &other)
	{
		_name = other.getName();
		_isSigned = other._isSigned;
    	_gradeToSign= other._gradeToSign;
    	_gradeToExecute = other._gradeToExecute;
	}
	return (*this);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Bureaucrat::GradeTooLowException();
    _isSigned = true;
}

bool	AForm::isSigned() const { return (_isSigned); }

std::string	AForm::getName() const { return (_name); }

int	AForm::getGradeTosign() const { return (_gradeToSign); }

int	AForm::getGradeToExecute() const { return (_gradeToExecute); }

const	char* AForm::GradeTooHighException::what() const throw()
{
	return ("Exception : AForm Grade is too high !");
}

const	char* AForm::GradeTooLowException::what() const throw ()
{
	return ("Exception : AForm Grade is too Low !");
}

std::ostream& operator<<(std::ostream& out, const AForm& current)
{
	out << "\nAForm named : " << current.getName() 
		<< "\nAForm status : " << (current.isSigned() ? "signed" : "not signed")
		<< "\nRequired grade to Sign : " << current.getGradeTosign() 
		<< "\nRequired grade to Execute : " << current.getGradeToExecute() << std::endl;
	return (out);
}

AForm::~AForm() {}
