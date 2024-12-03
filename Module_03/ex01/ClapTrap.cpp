/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:59:56 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 14:11:04 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
	std::cout	<< "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string	name): name(name),  HP(10), EP(10), AD(10)
{
	std::cout	<< "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name),  HP(other.HP), EP(other.EP), AD(other.AD)
{
	std::cout	<< "ClapTrap copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->HP = other.HP;
		this->EP = other.EP;
		this->AD = other.AD;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->HP > 0 && this->EP > 0)
	{
		std::cout << name << " attacks " << target << " dealing " << this->AD << " damage." << std::endl;
		this->EP--;
	}
	else
		std::cout << name << " can't attack " << target << '.' << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP)
	{
		if (amount >= this->HP)
		{
			std::cout << name << " takes " << this->HP << " damage and die." << std::endl;
			this->HP = 0;
		}
		else
		{
			std::cout << name << " takes " << amount << " damage." << std::endl;
			this->HP -= amount;
		}
	}
	else
		std::cout << name << " can't take anymore damage. " << name << " is already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP > 0 && this->EP > 0)
	{
		if (amount + this->HP > 10)
		{
			std::cout << name << " is repaired and gains " << 10 - this->HP << " HP." << std::endl;
			this->HP = 10;
		}
		else
		{
			std::cout << name << " is repaired and gains " << amount << " HP." << std::endl;
			this->HP += amount;
		}
		this->EP--;
	}
	else
		std::cout << name << " can't repair himself." << std::endl;
}