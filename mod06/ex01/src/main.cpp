/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:00:21 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/01 23:00:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "../header/Serializer.hpp"

int main ()
{
    Data *data = new Data();
    data->age = 42;
    data->Name = "Archly";

    std::cout << "\nDatas from data struct before serialisation" << std::endl;
    std::cout << "Data age : " << data->age << std::endl;
    std::cout << "Data Name : " << data->Name << std::endl;

    uintptr_t raw = Serializer::serialize(data);

    Data *data2 = Serializer::deserialize(raw);

    std::cout << "\nDatas from data struct after deserialisation : " << std::endl;
    std::cout << "Data2 age : " << data2->age << std::endl;
    std::cout << "Data2 Name : " << data2->Name << std::endl;

    delete data;
    return 0;
}
