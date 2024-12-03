/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:04:38 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/19 14:47:09 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	brain = new Brain;
	std::cout << this->getType() << " constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << this->getType() << " destructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	this->type = ref.getType();
	this->brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.getBrain());
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}