/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:48:39 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/03 12:25:08 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();

		Ice & operator=(Ice const & rhs);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif