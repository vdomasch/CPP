/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:09:08 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 12:01:15 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
	std::string		name;
	unsigned int	HP;
	unsigned int	EP;
	unsigned int	AD;
	
	public:
	ClapTrap(std::string name);
	~ClapTrap();
	
	ClapTrap(const ClapTrap&);
	ClapTrap& operator=(const ClapTrap&);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif