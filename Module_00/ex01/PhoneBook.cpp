/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:37:55 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/07 13:20:53 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : nb_contacts(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(void)
{
	std::string str;
	
	if (this-> nb_contacts >= 8)
	{
		std::cout << std::endl << "PhoneBook is full, rewritting on oldest entry" << std::endl;
	}
	std::cout << std::endl << "Enter the following informations" << std::endl;
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Firstname: ";
		std::getline(std::cin, str);
	}
	PhoneBook::contacts[this->nb_contacts % 8].set_firstname(str);
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Lastname: ";
		std::getline(std::cin, str);
	}
	PhoneBook::contacts[this->nb_contacts % 8].set_lastname(str);
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, str);
	}
	PhoneBook::contacts[this->nb_contacts % 8].set_nickname(str);
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, str);
	}
	PhoneBook::contacts[this->nb_contacts % 8].set_phonenumber(str);
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, str);
	}
	PhoneBook::contacts[this->nb_contacts % 8].set_darkestsecret(str);
	this->nb_contacts++;
}

void	PhoneBook::searchContact(void)
{
	int nb;
	
	if (this->nb_contacts == 0)
	{
		std::cout << "No contact in the PhoneBook" << std::endl;
		return ;
	}
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|   Index  |First name|Last  name| Nickname |" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->nb_contacts && i < 8; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		std::cout << this->contacts[i].get_length_to_ten(this->contacts[i].get_firstname()) << "|";
		std::cout << this->contacts[i].get_length_to_ten(this->contacts[i].get_lastname()) << "|";
		std::cout << this->contacts[i].get_length_to_ten(this->contacts[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	
	std::string str;
	while (!std::cin.eof() && str.empty())
	{
		std::cout << std::endl << "Enter the index of the contact you want to see: ";
		std::getline(std::cin, str);
		nb = atoi(str.data()) - 1;
		if (nb < 0 || nb >= this->nb_contacts || nb >= 8)
		{
			std::cout << "Invalid index" << std::endl;
			str.clear();
		}
	}
	if (!std::cin.eof() && nb >= 0 && nb < this->nb_contacts && nb < 8)
	{
		std::cout << std::endl << "Contact informations" << std::endl;
		std::cout << "First name: " << this->contacts[nb].get_firstname() << std::endl;
		std::cout << "Last name: " << this->contacts[nb].get_lastname() << std::endl;
		std::cout << "Nickname: " << this->contacts[nb].get_nickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[nb].get_phonenumber() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[nb].get_darkestsecret() << std::endl;
	}
}