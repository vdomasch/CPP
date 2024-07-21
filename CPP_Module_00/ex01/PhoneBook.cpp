/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:33:10 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 17:57:26 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	std::cout << "Hi!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Bye!" << std::endl;
}

void	PhoneBook::add(void)
{
	std::string str;
	
	str.clear();
	if (this->index > 7)
		std::cout << " Warning! Contact number limit reached, overwrititng info about " << this->index % 8 + 1 << std::endl;
	
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Enter contact first name: ";
		if (std::getline(std::cin, str))
			this->contacts[this->index % 8].set_fname(str);
	}
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Enter contact last name: ";
		if (std::getline(std::cin, str))
			this->contacts[this->index % 8].set_lname(str);
	}
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Enter contact nickname: ";
		if (std::getline(std::cin, str))
			this->contacts[this->index % 8].set_nickname(str);
	}
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Enter contact phone number: ";
		if (std::getline(std::cin, str))
			this->contacts[this->index % 8].set_phone(str);
	}
	str.clear();
	while (!std::cin.eof() && str.empty())
	{
		std::cout << "Enter contact darkest secret: ";
		if (std::getline(std::cin, str))
			this->contacts[this->index % 8].set_secret(str);
	}
	std::cout << std::endl;
	this->index++;
}

std::string	standardize(std::string str)
{
	int move = 0;
	
	if (str.size() > 10)
	{
		str.resize(10);
		str.at(9) = '.';
	}
	else
	{
		move = 10 - str.size();
		str.resize(10);
		for (int i = 9; i >= 0; i--)
		{
			if (i >= move)
				str.at(i) = str.at(i - move);
			else
				str.at(i) = ' ';
		}
	}
	return (str);
}


void	PhoneBook::ui(void)
{
	std::string	str;
	
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->index && i < 8; i++)
	{
		std::string str(1, i + 1 + 48);
		str = standardize(str);
		std::cout << '|' << str;
		str = this->contacts[i].get_fname();
		str = standardize(str);
		std::cout << '|' << str;
		str = this->contacts[i].get_lname();
		str = standardize(str);
		std::cout << '|' << str;
		str = this->contacts[i].get_nickname();
		str = standardize(str);
		std::cout << '|' << str << '|' << std::endl;
	}
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::endl;
}

static int stoi( std::string & s )
{
    int	i;
    std::istringstream(s) >> i;
    return (i);
}

void	PhoneBook::print_contact(void)
{
	std::string	str;
	
	int i = -1;
	while (i == -1)
	{
		std::cout << "Enter the index of the contact:" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			return;
		if (stoi(str) <= 8 && stoi(str) >= 1)
			i = stoi(str) - 1;
	}
	str = this->contacts[i].get_fname();
	std::cout << str << std::endl;
	str = this->contacts[i].get_lname();
	std::cout << str << std::endl;
	str = this->contacts[i].get_nickname();
	std::cout << str << std::endl;
	str = this->contacts[i].get_phone();
	std::cout << str << std::endl;
	str = this->contacts[i].get_secret();
	std::cout << str << std::endl << std::endl;
}

void	PhoneBook::search(void)
{
	std::string	str;
	
	if (this->index == 0)
		return ;
	ui();
	print_contact();
}