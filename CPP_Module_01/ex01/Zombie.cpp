/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:35:22 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 16:34:34 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->is_temp = 0;
	std::cout << "A zombie has been created" << std::endl;
}

Zombie::Zombie(std::string name): z_name(name) {}

Zombie::~Zombie(void)
{
	if (this->is_temp)
		std::cout << "Zombie '" << this->z_name << "' has been destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->z_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_is_temp(bool flag)
{
	this->is_temp = flag;
}
