/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:59 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/16 13:44:03 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();
		Fixed& operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif