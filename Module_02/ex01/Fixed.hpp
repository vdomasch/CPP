/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:59 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/19 13:11:31 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(const int );
		Fixed(const float );
		Fixed(const Fixed& );
		Fixed&	operator=(const Fixed& );
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const );
		float	toFloat(void) const;
		int		toInt(void)	const;
};

std::ostream& operator<<(std::ostream& ,const Fixed& );

#endif