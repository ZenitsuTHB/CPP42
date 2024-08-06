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

#include <string>
#include <iostream>

class Brain {

	public:

		Brain();
		Brain(const Brain &) = default;
		Brain &operator=(const Brain &) = default;
		~Brain();

	private:

};

Brain::Brain() {
}

Brain::~Brain() {
}
