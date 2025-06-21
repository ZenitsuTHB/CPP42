/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:12:37 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

#include  "ATarget.hpp"

class Dummy : public ATarget {
	
	public:
		Dummy();
		~Dummy();
		Dummy *clone() const;
};

#endif
