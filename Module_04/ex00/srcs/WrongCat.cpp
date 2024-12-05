/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:08:02 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/14 14:09:15 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << this->getType() << " constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->getType() << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
	this->type = ref.getType();
	std::cout << "A WrongCat was constructed from copy\n";
}

WrongCat & WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}