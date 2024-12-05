/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:11:22 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/03 12:33:20 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): _name("Random") {}

Character::Character(std::string const & name): _name(name) {}

Character::Character(Character const & src): _name(src._name) {}

Character::~Character() {}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (m == NULL)
	{
		std::cout << "Can't equip NULL" << std::endl;
		return ;
	}
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}