/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:08:35 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/14 14:13:23 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &);
		WrongCat& operator=(const WrongCat &);
		~WrongCat();

		void	makeSound() const;
};

#endif