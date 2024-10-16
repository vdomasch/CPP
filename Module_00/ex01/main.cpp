/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:27:30 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 11:15:47 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;

	while (1)
	{
		std::string command;
		
		while (!std::cin.eof() && command.empty())
		{
			std::cout << "Enter a command: ";
			std::getline(std::cin, command);
		}
		if (command == "EXIT" || std::cin.eof())
			break;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << std::endl;
	}
	return (0);
}