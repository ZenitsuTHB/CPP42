/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 12:13:15 by avolcy            #+#    #+#             */
/*   Updated: 2025/06/18 14:08:51 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

void TargetGenerator::learnTargetType(const ATarget *toLearn)
{
		if (toLearn)
				_types[toLearn->getType()] = toLearn->clone();
}

void TargetGenerator::forgetTargetType(const std::string &name)
{
	std::map<std::string, ATarget*>::iterator it = _types.find(name);	
	if (it != _types.end())
		delete it->second;
}

ATarget * TargetGenerator::createTarget(const std::string &name)
{
	std::map<std::string, ATarget*>::iterator it = _types.find(name);	
	if (it != _types.end())
		return it->second->clone();
	return NULL;

}

TargetGenerator::~TargetGenerator( ) {
	
	for (std::map<std::string, ATarget*>::iterator it = _types.begin();	it != _types.end(); ++it)
		delete it->second;
}
