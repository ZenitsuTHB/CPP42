/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:37:09 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/02 12:37:40 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string stringToUpper(std::string str)
{
  for (int i = 0; str[i]; i++) {
    str[i] = std::toupper(str[i]);
  }
  return (str);
}

int main (int argc, char *argv[])
{
  if (argc < 2)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

  for (int i = 1; i < argc; i++)
    std::cout << stringToUpper(argv[i]) << " ";
  std::cout << std::endl;
  return (0);
}
