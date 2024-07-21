/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:14:06 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 19:28:10 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string weapon)
{
	_type = weapon;
}

std::string	&Weapon::getType(void)
{
	return (_type);
}