/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:02:53 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/19 14:45:11 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Some random thoughts";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "A brain has been copy constructed" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
		std::cout << "A brain has been copy assigned" << std::endl;
	}
	return (*this);
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Brain destructor called" << std::endl;
}

std::string*	Brain::getIdeas() const
{
	return (this->ideas);
}
