/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:48:08 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/27 11:38:24 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp" 
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
	private:
	
	public:
	FragTrap(std::string name);
	~FragTrap();
	void		highFivesGuys(void);
};

#endif