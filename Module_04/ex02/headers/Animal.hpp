/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:05:38 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/21 12:50:22 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
		Animal();
		Animal(std::string type);
		Animal(const Animal & );

	public:
		Animal& operator=(const Animal & );
		virtual ~Animal();
		
		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif