/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:12:45 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/16 10:26:10 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);	
	}
	Harl harl;
	std::string complains[] = { "debug", "info", "warning", "error" }; 
	std::string	level(argv[1]);
	int i;
	for (i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			break;
	}
	switch (i) {
		case 0:
			harl.complain("debug");
		case 1:
			harl.complain("info");
		case 2:
			harl.complain("warning");
		case 3:
			harl.complain("error");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	
	return (0);
}