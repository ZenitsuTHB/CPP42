/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/25 23:04:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _FORM_HPP
#define _FORM_HPP

#include <string>
#include <stdexcept>
#include <iostream>

# define lowestGrade 150
# define highestGrade 1

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        int                 _gradeToSign;
        int                 _gradeToExecute;

    public:
        Form();
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

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

std::ostream& operator<<(std::ostream& out, const Form& cog);

#endif
