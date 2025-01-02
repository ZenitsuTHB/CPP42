/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 00:25:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _FORM_HPP
#define _FORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>
#include "../header/Bureaucrat.hpp"

# define lowestGrade 150
# define highestGrade 1

class Bureaucrat; // Forward declaration

class Form
{
    private:
        std::string     _name;
        bool            _isSigned;
        int             _gradeToSign;
        int             _gradeToExecute;

    public:
        Form();
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

		bool		isSigned() const;
        std::string getName() const;
        int         getGrade() const;
        int         getGradeTosign() const;
        int         getGradeToExecute() const;

		void		beSigned(const Bureaucrat &bur);

        class GradeTooHighException : public std::exception {
            
            public :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public :
                const char* what()  const throw();
        };
        
};

std::ostream& operator<<(std::ostream& out, const Form& current);

#endif
