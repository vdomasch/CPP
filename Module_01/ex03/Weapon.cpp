/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:01:23 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 16:43:55 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
	std::cout << "The weapon " << this->type << " has been made." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "The weapon " << this->type << " has been broken." << std::endl;
}

std::string	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	std::cout << "The weapon " << this->type << " is now set as " << newType << '.' << std::endl;
	this->type = newType;
}