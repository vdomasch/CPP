/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:28:40 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 12:07:12 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Frank("Frank");
	ScavTrap Philip("Philip");
	
	std::cout << std::endl;

	Frank.attack("Philip");
	Philip.takeDamage(0);

	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(20);
	
	std::cout << std::endl;
	
	Frank.attack("Philip");
	Philip.takeDamage(0);
	Frank.beRepaired(2);
	
	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(20);
	Philip.guardGate();

	std::cout << std::endl;
	
	Frank.attack("Philip");
	Philip.takeDamage(0);
	Frank.beRepaired(2);
	
	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(20);
	
	std::cout << std::endl;
	
	return (0);
}