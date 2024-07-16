/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:04:39 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/16 19:19:01 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char *argv[])
{
	if (argc == 2 && **argv != '\0')
	{
		Harl isRobot;
		std::string test[] = {"DEBUG","INFO","WARNING","ERROR","TEST"};

		for (int i = 0; i < 5; i++) {

      if (test[i] == argv[1])
      {
        isRobot.complain(test[i]);
      }
    }
	}
	return (0);
}
