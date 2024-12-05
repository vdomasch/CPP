/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:32:59 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/03 12:23:55 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(): type("Random item") {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses some " << type << " on " << target.getName() << " *" << std::endl;
}
