/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:16:14 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/17 09:36:27 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string str;
		
	while (str != "EXIT")
	{
		std::cout << "Enter one of these three command: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, str);
		if (str == "SEARCH")
			phonebook.search();
		else if (str == "ADD")
			phonebook.add();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}