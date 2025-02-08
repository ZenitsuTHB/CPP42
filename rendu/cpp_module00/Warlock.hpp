/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/02/08 12:50:59 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {
	
	private:
		std::string _name;
		std::string _title;
		
		Warlock();
		Warlock(const Warlock &src );
		Warlock & operator=(const Warlock &src );
	public:
		Warlock(std::string, std::string);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(const std::string &);
		void introduce() const;

};

#endif
