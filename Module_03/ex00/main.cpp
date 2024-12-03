/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:23:27 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/18 10:34:32 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Clap("Clap");

	Clap.attack("Trap");
	Clap.takeDamage(5);
	Clap.beRepaired(2);
	Clap.takeDamage(8);
	Clap.takeDamage(8);
	Clap.attack("Trap");
	Clap.beRepaired(2);
}
