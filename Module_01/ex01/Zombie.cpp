/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:56:56 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 15:16:28 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "cstdlib"

Zombie::Zombie()
{
	this->name = "";
	std::cout << "A nameless zombie has risen from the dead." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " has risen from the dead." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " is dead again" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	std::cout << "A nameless zombie has now obtained the name " << this->name << std::endl;
}