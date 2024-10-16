/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:32:46 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/18 16:33:16 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
	bool		is_temp;
	std::string	z_name;

	public:
	void	set_is_temp(bool);
	Zombie();
	explicit Zombie(std::string name);
	~Zombie();
	void	announce(void);
};

#endif