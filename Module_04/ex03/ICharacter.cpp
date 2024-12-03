/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:11:22 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/03 12:33:20 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

ICharacter::ICharacter(): _name("Random") {}

ICharacter::ICharacter(std::string const & name): _name(name) {}

ICharacter::ICharacter(ICharacter const & src): _name(src._name) {}

ICharacter::~ICharacter() {}

ICharacter & ICharacter::operator=(ICharacter const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}

std::string const & ICharacter::getName() const
{
	return (_name);
}

void ICharacter::equip(AMateria *m)
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

void ICharacter::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		std::cout << "* " << _name << " uses some " << _inventory[idx]->getType() << " on " << target.getName() << " *" << std::endl;
}