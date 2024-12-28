/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:20:03 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/28 21:34:16 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#iclude "../header/Form.hpp"

Form::Form() {}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) {
	
	if (gradeTosign < highestGrade || gradeToExecute < highestGrade)
		throw gradeTooHighException();
	if (gradeToSign > lowestGrade || gradeToExecute > lowestGrade)
		throw gradeTooLowException();
	_name = name;
	_isSigned = false;
	_gradeToSign = getGradeTosign;
	_gradeToExecute = gradeToExecute;
}
        
Form::Form(const Form& other) {

	*this = other;
}
        
Form& Form::operator=(const Form& other) {

	if (this != other)
	{
		_name = other._name;
		_isSigned = other._isSigned;
    	_gradeToSign= other._isSigned;
    	_gradeToExecute = other._isSigned;
	}
	return (*this);
}

bool	Form::isSigned() { return (_isSigned); }

std::string	Form::getName() const { return (_name); }

int	Form::getGradeTosign() const { return (_gradeToSign); }

int	Form::getGradeToExecute() const { return (gradeToExecute); }

const	char* Form::gradeTooHighException() const throw()
{
	return ("Exception : Grade is too high !");
}

const	char* Form::gradeTooLowException() const throw ()
{
	return ("Exception : Grade is too Low !");
}

std::ostream& operator<<(std::ostream& out, const Form& current)
{
	out << "Form name : " << getName() << "\nForm status : " << isSigned()
		<< "\nRequired grade to Sign : " << getGradeTosign() 
		<< "\nRequired grade to Execute : " getGradeToExecute() << std::endl;
	return (out);
}

Form::~Form() {}
