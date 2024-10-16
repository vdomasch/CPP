/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:28:40 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 12:08:10 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap Frank("Frank");
	FragTrap Philip("Philip");
	
	std::cout << std::endl;

	Frank.attack("Philip");
	Philip.takeDamage(20);

	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(30);
	
	std::cout << std::endl;
	
	Frank.attack("Philip");
	Philip.takeDamage(20);
	Frank.beRepaired(2);
	
	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(30);
	Philip.highFivesGuys();

	std::cout << std::endl;
	
	Frank.attack("Philip");
	Philip.takeDamage(20);
	Frank.beRepaired(2);
	
	std::cout << std::endl;
	
	Philip.attack("Frank");
	Frank.takeDamage(30);
	
	std::cout << std::endl;

	Philip.attack("Frank");
	Frank.takeDamage(30);

	std::cout << std::endl;

	Frank.attack("Philip");

	std::cout << std::endl;

	return (0);
}