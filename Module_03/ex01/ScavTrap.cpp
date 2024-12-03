/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:27:27 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 14:30:17 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Scav")
{
	std::cout	<< "ScavTrap default constructor called." << std::endl;
	HP = 100;
	EP = 50;
	AD = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout	<< "ScavTrap constructor called." << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap("Scav")
{
	std::cout	<< "ScavTrap copy constructor called." << std::endl;
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout	<< "ScavTrap copy assignment operator called." << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->HP = other.HP;
		this->EP = other.EP;
		this->AD = other.AD;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap default destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}