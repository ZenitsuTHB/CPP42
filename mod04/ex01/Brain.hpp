/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:41:08 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/15 21:17:06 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP
# define _BRAIN_HPP

# define INDEX 100
# define BOSS "I Must start my Own Business"
# define IDEAS "Probably Thinking of good ideas ..."
# define INVIDX "Invalid index Detected ! Must be between (0 - 99)"

#include <string>
#include <iostream>

class Brain {

	public:

		Brain();
		Brain(const Brain &);
		Brain &operator=(const Brain &);
		~Brain();

		//Brain* clone() const;
		std::string getIdeas(int index) const;
		void setIdeas(int index, std::string ideas);

	private:

    std::string _ideas[100];
};

bool	goodIndex(int index); 

#endif 
