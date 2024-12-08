/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2024/12/08 16:02:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        int         _grade;
        std::string _name;

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
};

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    _name = name;
    if (grade > 150)
        throw ();
}

Bureaucrat::~Bureaucrat()
{
}


#endif