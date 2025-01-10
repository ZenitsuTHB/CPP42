/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:39:19 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/10 12:37:44 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP
# define _PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        
    public:
        PresidentialPardonForm(const std::string &);
        PresidentialPardonForm(const PresidentialPardonForm &);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &);
        ~PresidentialPardonForm();
        
        void    execute(const Bureaucrat &) const;
};

#endif