/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:05:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/02 00:08:21 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

# include <iostream>
# include <string>
//# include <cstdint>

typedef unsigned long uintptr_t;

struct Data
{
    int         age;
    std::string Name;   
};

class Serializer
{
    private:
        
        Serializer();
        Serializer(const Serializer &cpy);
        Serializer &operator=(const Serializer &cpy);
        ~Serializer();
        
    public:
    
        static uintptr_t serialize(Data* ptr);
        static  Data* deserialize(uintptr_t raw);
            
};

#endif
