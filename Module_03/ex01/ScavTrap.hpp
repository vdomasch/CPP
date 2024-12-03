/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:22:13 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 14:11:46 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		

	public:
		ScavTrap();
		ScavTrap(std::string );
		ScavTrap(const ScavTrap& );
		ScavTrap& operator=(const ScavTrap& );
		~ScavTrap();
		void guardGate();
		
};

#endif