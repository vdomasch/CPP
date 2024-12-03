/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:23:27 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 14:16:05 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Clap("Clap");
	ScavTrap	Scav("Scav");

	Clap.attack("Scav");
	Scav.takeDamage(10);

	Clap.attack("Scav");
	Scav.takeDamage(10);
	
	Clap.beRepaired(2);	

	Scav.attack("Clap");
	Clap.takeDamage(20);
	
	Clap.takeDamage(8);
	Clap.attack("Trap");
	Clap.beRepaired(2);

	Scav.beRepaired(2);
	Scav.attack("Trap");
	Scav.beRepaired(5);
}
