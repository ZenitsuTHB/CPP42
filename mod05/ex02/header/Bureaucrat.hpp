/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelona.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/06 23:11:17 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

# define lowestGrade 150
# define highestGrade 1

#include "../header/AForm.hpp"

class AForm;
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

        void    signAForm(AForm &form);
        void    incrementGrade();
        void    decrementGrade();
        std::string getName() const;
        int         getGrade() const;
        
        void    executeForm(AForm const & form);

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
