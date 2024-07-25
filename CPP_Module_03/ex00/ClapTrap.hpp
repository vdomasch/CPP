/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:09:08 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 19:27:22 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string		name;
	unsigned int	HP;
	unsigned int	EP;
	unsigned int	AD;
	
	public:
	ClapTrap(std::string name);
	~ClapTrap();
	void	setHP(int);
	void	setEP(int);
	void	setAD(int);
	int		getHP(void);
	int		getEP(void);
	int		getAD(void);	
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif