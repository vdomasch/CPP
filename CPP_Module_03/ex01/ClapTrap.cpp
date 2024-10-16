/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:13:02 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 12:14:42 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), HP(10), EP(10), AD(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& value)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &value)
	{
		this->name = value.name;
		this->HP = value.HP;
		this->EP = value.EP;
		this->AD = value.AD;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->HP > 0 && this->EP > 0)
	{
		std::cout << this->name << " attack " << target << " inflicting " << this->AD << " damage";
		if (this->AD > 1)
			std::cout << 's';
		std::cout << '!' << std::endl;
		this->EP -= 1;
	}
	else if (this->HP == 0)
		std::cout << this->name << " can't do anything. " << this->name << " is dead!" << std::endl;
	else 
		std::cout << this->name << " has no energy point left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP > 0)
	{
		std::cout << this->name << " takes " << amount << " damage";
		if (amount > 1)
			std::cout << 's';
		std::cout << '.' << std::endl;
		if (this->HP < amount)
			this->HP = 0;
		else
			this->HP -= amount;
		if (this->HP == 0)
			std::cout << this->name << " die." << std::endl;
		else
			std::cout << this->name << " has now " << this->HP << " left." << std::endl;
	}
	else
		std::cout << this->name << " can't recieve any damage. " << this->name << " is dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP > 0 && this->EP > 0)
	{
		std::cout << this->name << " repair himself and gain " << amount << " hit point";
		if (amount > 1)
			std::cout << 's';
		std::cout << '.' << std::endl;
		this->HP += amount;
		this->EP -= 1;
	}
	else if (this->HP == 0)
		std::cout << this->name << " can't do anything. " << this->name << " is dead!" << std::endl;
	else 
		std::cout << this->name << " has no energy point left." << std::endl;
}
