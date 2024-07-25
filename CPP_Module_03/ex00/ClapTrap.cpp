/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:13:02 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 19:28:54 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->HP = 10;
	this->EP = 10;
	this->AD = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::setHP(int amount)
{
	this->HP = amount;
	std::cout << this->name <<  " has now " << this->getHP() << " HP." << std::endl;
}

void	ClapTrap::setEP(int amount)
{
	this->EP = amount;
	std::cout << this->name <<  " has now " << this->getEP() << " EP." << std::endl;
}

void	ClapTrap::setAD(int amount)
{
	this->AD = amount;  
	std::cout << this->name <<  " can now inflict " << this->getAD() << " damage";
	if (this->AD > 1)
			std::cout << 's';
	std::cout << '.' << std::endl;
}

int		ClapTrap::getHP(void)
{
	return (this->HP);
}

int		ClapTrap::getEP(void)
{
	return (this->EP);
}

int		ClapTrap::getAD(void)
{
	return (this->AD);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << this->name << " attack " << target << " inflicting " << this->AD << " damage";
		if (this->AD > 1)
			std::cout << 's';
		std::cout << '!' << std::endl;
		this->setEP(this->EP - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() > 0)
	{
		std::cout << this->name << " take " << amount << " damage";
		if (amount > 1)
			std::cout << 's';
		std::cout << '.' << std::endl;
		if (this->HP < amount)
			this->setHP(0);
		else
			this->setHP(this->HP - amount);
		if (this->getHP() == 0)
			std::cout << this->name << " die." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << this->name << " repair himself and gain " << amount << " hit point";
		if (amount > 1)
			std::cout << 's';
		std::cout << '.' << std::endl;
		this->setHP(this->HP + amount);
		this->setEP(this->EP - 1);
	}
}
