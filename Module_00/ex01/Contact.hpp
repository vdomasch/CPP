/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:40:37 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/15 10:39:20 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
		std::string get_length_to_ten(std::string str) const;
		std::string get_firstname(void) const;
		std::string get_lastname(void) const;
		std::string get_nickname(void) const;
		std::string get_phonenumber(void) const;
		std::string get_darkestsecret(void) const;
		void		set_firstname(std::string firstName);
		void		set_lastname(std::string lastName);
		void		set_nickname(std::string nickname);
		void		set_phonenumber(std::string phoneNumber);
		void		set_darkestsecret(std::string darkestSecret);
};

#endif