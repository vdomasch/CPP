/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:38:32 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 16:32:15 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return (NULL);
	Zombie *Horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		Horde[i] = Zombie(name);
		Horde[i].set_is_temp(1);
	}
	return (Horde);
}