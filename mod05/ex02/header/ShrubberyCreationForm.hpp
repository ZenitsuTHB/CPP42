/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/04 13:47:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _SHRUBBERY_CREATION_FORM_HPP
#define _SHRUBBERY_CREATION_FORM_HPP

#include <string>
#include <stdexcept>
#include <fstream>
#include "../header/Bureaucrat.hpp"


class Bureaucrat; // Forward declaration
class ShrubberyCreationForm : public AForm
{
    private:
        std::string     _target;

    public:
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm();

        void    execute(Bureaucrat const & executor) const;

};
 
#endif
