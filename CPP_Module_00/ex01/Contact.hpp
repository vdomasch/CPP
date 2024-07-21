/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:34:54 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/16 19:40:19 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string phone;
	std::string secret;

	public:
	std::string	get_fname(void);
	std::string	get_lname(void);
	std::string	get_nickname(void);
	std::string	get_phone(void);
	std::string	get_secret(void);
	void		set_fname(std::string);
	void		set_lname(std::string);
	void		set_nickname(std::string);
	void		set_phone(std::string);
	void		set_secret(std::string);
};

#endif
