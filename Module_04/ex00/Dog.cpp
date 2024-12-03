/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:14:25 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/14 11:46:13 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << this->getType() << " destructor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}