/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:31:11 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 14:41:42 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name);

int	main(void)
{
	int n = 8;
	Zombie *Horde;
	
	Horde = zombieHorde(n, "Dorian");
	if (Horde == NULL)
		return (1);
	for (int i = 0; i < n; i++)
	{
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}