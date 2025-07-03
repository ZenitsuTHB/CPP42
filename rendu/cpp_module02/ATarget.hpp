/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:14:18 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp" 

class ASpell;
class ATarget {
	
	protected:
		std::string _type;
		
		ATarget();
		ATarget(const ATarget &src );
		ATarget & operator=(const ATarget &src );
	public:
		ATarget(const std::string &);
		virtual ~ATarget();

		const std::string &getType() const;
	
		virtual ATarget * clone()const = 0;
		
		void getHitBySpell(const ASpell &)const;
};

#endif
