/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:52:56 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 14:10:51 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		name;
		unsigned int	HP;
		unsigned int	EP;
		unsigned int	AD;

	public:
		ClapTrap();
		ClapTrap(std::string );
		ClapTrap(const ClapTrap& );
		ClapTrap& operator=(const ClapTrap& );
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned	int	amount);
		void	beRepaired(unsigned	int	amount);
};

#endif