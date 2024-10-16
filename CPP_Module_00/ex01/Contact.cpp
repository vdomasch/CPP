/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:16:12 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/16 13:45:22 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_fname(void) 
{
	return (this->fname);
}

std::string	Contact::get_lname(void)
{
	return (this->lname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone(void)
{
	return (this->phone);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}

void		Contact::set_fname(std::string str)
{
	this->fname = str;
}

void		Contact::set_lname(std::string str)
{
	this->lname = str;
}

void		Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void		Contact::set_phone(std::string str)
{
	this->phone = str;
}

void		Contact::set_secret(std::string str)
{
	this->secret = str;
}
