/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:14:25 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/19 14:48:00 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	brain = new Brain;
	std::cout << this->getType() << " constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << this->getType() << " destructor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	this->type = ref.getType();
	this->brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat was constructed from copy\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.getType();
		this->brain = new Brain(*other.getBrain());
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}