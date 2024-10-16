/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:33:04 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 17:39:06 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <sstream>

class PhoneBook
{
	private:
	Contact contacts[8];
	int	index;
	
	public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add(void);
	void	search(void);
	void	ui(void);
	void	print_contact(void);
};

#endif