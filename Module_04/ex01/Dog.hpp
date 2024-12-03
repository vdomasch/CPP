/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:14:21 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/19 12:06:25 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog & );
		Dog& operator=(const Dog & );
		~Dog();
		
		virtual void	makeSound() const;
		Brain			*getBrain() const;
};

#endif