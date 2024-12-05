/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:13:07 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/14 14:03:41 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal of type '" << this->type << "' constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal of type "<< this->type << " destructor called" << std::endl;
}

Animal::Animal(const Animal &ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Animal & Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}


std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Some animal noise" << std::endl;
}
