/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:28:40 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 15:41:13 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	FragTrap Philip("Philip");
	DiamondTrap	Diamond("Diamond");
	
	std::cout << std::endl;

	Diamond.attack("Philip");
	Philip.takeDamage(30);

	std::cout << std::endl;
	
	Philip.attack("Diamond");
	Diamond.takeDamage(30);
	
	std::cout << std::endl;
	
	Diamond.attack("Philip");
	Philip.takeDamage(30);
	Diamond.beRepaired(15);
	
	std::cout << std::endl;
	
	Philip.attack("Diamond");
	Diamond.takeDamage(30);
	Philip.highFivesGuys();
	Diamond.highFivesGuys();
	
	std::cout << std::endl;
	
	Diamond.attack("Philip");
	Philip.takeDamage(30);
	Diamond.beRepaired(15);
	
	std::cout << std::endl;
	
	Philip.attack("Diamond");
	Diamond.takeDamage(30);
	
	std::cout << std::endl;

	Philip.attack("Diamond");
	Diamond.takeDamage(30);

	std::cout << std::endl;

	Diamond.attack("Philip");
	Philip.takeDamage(30);

	std::cout << std::endl;

	Philip.attack("Diamond");
	Diamond.whoAmI();
	
	std::cout << std::endl;

	return (0);
}