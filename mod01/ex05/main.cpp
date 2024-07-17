/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:01:58 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 18:58:09 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl isRobot;
	std::string test[] = {"DEBUG","INFO","WARNING","ERROR","TEST"};
	
	for (int i = 0; i < 5; i++) {
	
	  isRobot.complain(test[i]);
	}
}
