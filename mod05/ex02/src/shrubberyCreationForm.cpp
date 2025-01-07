/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42barcelona.co>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:02:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/01/04 15:02:34 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/shrubberyCreationForm.hpp"

shrubberyCreationForm::shruberryCreationForm(const std:string &target) : 
AForm("Shrubbery Creation Form", 145, 137), _target(target) {}


shrubberyCreationForm::~shruberryCreationForm() {}



