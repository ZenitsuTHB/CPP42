/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/03 00:22:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

# define lowestGrade 150
# define highestGrade 1

#include "../header/Form.hpp"

class Form;
class Bureaucrat
{
    private:
        int         _grade;
        std::string _name;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();

        void    signForm(Form &form);
        void    incrementGrade();
        void    decrementGrade();
        std::string getName() const;
        int         getGrade() const;

        class GradeTooHighException : public std::exception {
            
            public :
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

            public :
                const char* what()  const throw();
        };
        
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& cog);

#endif
