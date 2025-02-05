/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:38:27 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/10 12:38:15 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef _SHRUBBERYCREATIONFORM_HPP
#define _SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"


class Bureaucrat; // Forward declaration
class ShrubberyCreationForm : public AForm
{
    private:
        std::string     _target;

    public:
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
        ~ShrubberyCreationForm();

        void    execute(Bureaucrat const & executor) const;

};
 
#endif
