/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:04:38 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/14 11:46:25 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->getType() << " destructor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}