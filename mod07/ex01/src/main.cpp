/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <avolcy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:41:56 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/05 19:04:16 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/iter.hpp"
#include <cstring>

void	addString(std::string & str)
{
	str += "_iter_42";
}

void 	tenTimesInt(int & i)
{
	i *= 10; 
}

void	rot13Cpp(std::string & str)
{
	size_t len = strlen(str.c_str());
	for(size_t i = 0; i < len; i++)
	{
		if (std::isalpha(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if(str[i] <= 'M')
					str[i] += 13;
				else
					str[i] -= 13;
			}
			else if(str[i] >= 'a' || str[i] >= 'z')
			{
				if(str[i] <= 'm')
					str[i] += 13;
				else
					str[i] -= 13;
			}
		}
	}
}

int main()
{
	int arrInt[] = { 1, 2, 3, 4, 5, 6, 7 };

	unsigned int size = sizeof( arrInt ) / sizeof( arrInt[0] );
	iter(arrInt, size, tenTimesInt);
	for (unsigned int i = 0; i < size; i++ )
		std::cout << arrInt[i] << std::endl;
 
	std::string arrStr[] = { "test1", "test2", "test3", "test4" };
	unsigned int len = sizeof( arrStr ) / sizeof( arrStr[0] );
	iter(arrStr, len, addString);
	for (unsigned int i = 0; i < len; i++ )
		std::cout << arrStr[i] << std::endl;
	
	std::string rot13[] = { "Hello World !", "This is a test" };
	unsigned int rotLen = sizeof( rot13 ) / sizeof( rot13[0] );
	iter(rot13, rotLen, rot13Cpp);
	for (unsigned int i = 0; i < rotLen; i++)
		std::cout << rot13[i] << std::endl;

	return (0);
}
