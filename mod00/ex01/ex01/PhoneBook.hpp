/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:32:19 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/13 12:11:19 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <cstdlib>
# include <cctype>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
  public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    bool searchContact() const;
    void displayContact();
    void farewellMessage() const;
    void greetingsMessage() const;
  
  private:
    Contact _contacts[8];//raw array, c_like

    int   _num_of_contact;
    void  _thePrinter(int index) const;
    std::string _getUserData(std::string input, int flag);
};

# endif
