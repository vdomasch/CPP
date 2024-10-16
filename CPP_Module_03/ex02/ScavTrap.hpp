/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:58:07 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 12:01:07 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp" 

class ScavTrap : public ClapTrap
{
	private:
	
	public:
	ScavTrap(std::string name);
	~ScavTrap();
	void		guardGate(void);
};

#endif