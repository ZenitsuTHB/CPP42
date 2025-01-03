/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:04:25 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/17 18:21:00 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP
# define _HARL_HPP

# include <map>
# include <string>
# include <iostream>

class Harl {

	public:
		Harl();
		~Harl();

		void complain( std::string level );
	
	private:

		enum Debugging { D, I, W, E } ;
		std::map<std::string, Debugging> getDebugMap;

		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		void (Harl::*_comments[4])( void );//cause 4 is needed;
		
		//Syntax for pointer to member functions :
		//returnType (ClassName::*pointerName)(parameterTypes);
};

#endif
