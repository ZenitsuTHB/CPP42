/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:05:34 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/01 12:22:34 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

# include <iostream>

typedef struct Data
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
        static Data* deserialize(uintptr_t raw);
            
};

#endif
