/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:42:15 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 10:42:56 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


std::string Contact::get_length_to_ten(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
	{
		while (str.length() < 10)
			str.insert(0, " ");
	}
	return (str);
}

std::string Contact::get_firstname(void) const
{
	return (this->firstName);
}

std::string Contact::get_lastname(void) const
{
	return (this->lastName);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phonenumber(void) const
{
	return (this->phoneNumber);
}

std::string Contact::get_darkestsecret(void) const
{
	return (this->darkestSecret);
}

void	Contact::set_firstname(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::set_lastname(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void	Contact::set_phonenumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::set_darkestsecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
