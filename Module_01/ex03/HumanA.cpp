/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:04:15 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 16:41:05 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon)
{
	std::cout << "Human A named " << this->name << " is now here with " << this->weapon->getType() << '.' << std::endl; 
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->name << " is no longer here." << std::endl;
}

void	HumanA::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}