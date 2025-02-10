/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/10 14:29:22 by avolcy           ###   ########.fr       */
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
        int			_grade;
        const std::string	_name;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();

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
