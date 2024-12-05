/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:56:19 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/05 15:06:22 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nbMaterias(0)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (_materias[i] != NULL)
			;//delete _materias[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs) {
		for (int i = 0; i < 4; i++) {
			if (_materias[i] != NULL)
				;//delete _materias[i];
			_materias[i] = rhs._materias[i]->clone();
		}
		_nbMaterias = rhs._nbMaterias;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (_nbMaterias < 4) {
		_materias[_nbMaterias] = m;
		_nbMaterias++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++) {
		if (_materias[i] != NULL && _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return NULL;
}