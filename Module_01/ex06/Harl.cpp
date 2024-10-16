/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:26:54 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/16 10:09:05 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Debug." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Warning!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	complain[] = {"debug", "info", "warning", "error"};
	void		(Harl::*members[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (complain[i] == level)
			(this->*members[i])();
	}
}