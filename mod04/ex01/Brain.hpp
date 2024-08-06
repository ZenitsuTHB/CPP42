/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:41:08 by avolcy            #+#    #+#             */
/*   Updated: 2024/08/05 16:41:26 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP
# define _BRAIN_HPP

# define INDEX 99

#include <string>
#include <iostream>

class Brain {

	public:

		Brain();
		Brain(const Brain &);
		Brain &operator=(const Brain &);
		~Brain();

    std::string getIdeas(int index) const;
    void setIdeas(int index, std::string ideas);

	private:

    std::string _ideas[100];
};

#endif 
