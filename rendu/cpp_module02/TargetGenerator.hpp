/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:16:30 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator {
	
	private:
		std::map<std::string, ATarget*> _types;
		
		TargetGenerator(const TargetGenerator &src );
		TargetGenerator & operator=(const TargetGenerator &src );
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(const ATarget *);
		void forgetTargetType(const std::string &name);
		ATarget * createTarget(const std::string &name);

};

#endif
