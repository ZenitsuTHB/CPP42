/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 15:02:30 by marvin           ###   ########.fr       */
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
class AForm
{
    private:
        std::string     _name;
        bool            _isSigned;
        int             _gradeToSign;
        int             _gradeToExecute;

    public:
        AForm();
        AForm(const std::string name, int gToSign, int gToExec);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();

		bool		isSigned() const;
        std::string getName() const;
        int         getGrade() const;
        int         getGradeTosign() const;
        int         getGradeToExecute() const;

		void		    beSigned(const Bureaucrat &);
        virtual void    execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception {
            
            public :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public :
                const char* what()  const throw();
        };
        
};

std::ostream& operator<<(std::ostream& out, const AForm& current);
 
#endif
