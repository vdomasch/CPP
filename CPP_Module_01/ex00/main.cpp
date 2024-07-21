/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:53:05 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/17 18:10:14 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);

void	randomChump(std::string name);

int main(void)
{
	Zombie *zzz = newZombie("Leo");
	
	zzz->announce();
	randomChump("Benjamin");
	delete zzz;
}