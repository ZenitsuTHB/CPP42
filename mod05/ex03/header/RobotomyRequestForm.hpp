/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:47:36 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/07 20:29:33 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP
# define _ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


#include <cstdlib>
#include <ctime>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
        
    public:
        RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();

        void    execute(Bureaucrat const &) const;
};

#endif