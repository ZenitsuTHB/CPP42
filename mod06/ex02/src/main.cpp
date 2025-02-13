/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 00:38:32 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/02 00:38:32 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Identify.hpp"

#define nullptr NULL
int main()
{
    //Base *base = generate();

    Base* ptr = nullptr;

    std::cout << "Identifying using Pointer :" << std::endl;
    //identify(base);
    identify(ptr);
    std::cout << "Identifying using Reference :" << std::endl;
   // identify(*base);
    identify(*ptr);  // ❌ Segmentation fault (dereferencing nullptr!)

    return 0;
}
