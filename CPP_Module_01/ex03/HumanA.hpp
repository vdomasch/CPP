/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:11:29 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 19:22:16 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
	std::string	_name;
	Weapon		&_weapon;

	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	setWeapon(Weapon weapon);
	void attack();
};

#endif