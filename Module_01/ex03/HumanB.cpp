/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:15:49 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 16:49:04 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	std::cout << "Human B named " << this->name << " is now here without a weapon." << std::endl; 
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->name << " is no longer here." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	std::cout << this->name << " is now equipped with " << this->weapon->getType() << std::endl;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << this->name << " attacks with " << this->weapon->getType() << '.' << std::endl;
	else
		std::cout << this->name << " attacks with their hand." << std::endl;
}
