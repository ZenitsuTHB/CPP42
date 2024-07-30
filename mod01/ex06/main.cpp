/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:04:39 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 18:21:55 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int argc, char *argv[])
{
	if (argc == 2 && **argv != '\0')
	{
		Harl isRobot;
		isRobot.complain(argv[1]);
	}
	return (0);
}