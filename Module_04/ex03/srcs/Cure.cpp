/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:26:16 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/03 12:27:15 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("Cure") {}

Cure::Cure(Cure const & src): AMateria(src) {}

Cure::~Cure() {}

Cure & Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure
(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}