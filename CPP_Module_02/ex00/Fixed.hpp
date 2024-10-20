/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:13:44 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/24 13:48:53 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
	int					number;
	static const int	bits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fix);		//copy constructor
	Fixed& operator=(const Fixed& fix);	//copy assignment
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif