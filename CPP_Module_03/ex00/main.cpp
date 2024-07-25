/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:09:01 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 19:29:31 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Frank("Frank");
	
	Frank.attack("Philip");
	Frank.takeDamage(3);
	Frank.beRepaired(2);
	Frank.setAD(10);
	Frank.takeDamage(6);
	Frank.attack("Kevin");
	Frank.takeDamage(3);
	
	return (0);
}