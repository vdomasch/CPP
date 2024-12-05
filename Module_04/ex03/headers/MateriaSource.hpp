/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:33:43 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/05 15:00:50 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();

		MateriaSource & operator=(MateriaSource const & rhs);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

		

	private:

		AMateria* _materias[4];
		int _nbMaterias;

};

#endif