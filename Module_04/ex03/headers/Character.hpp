/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:48:23 by vdomasch          #+#    #+#             */
/*   Updated: 2024/12/05 15:05:29 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		~Character();
		Character & operator=(Character const & rhs);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
};

#endif