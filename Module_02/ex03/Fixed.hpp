/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:59 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/17 17:13:24 by vdomasch         ###   ########.fr       */
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
		~Fixed();
		Fixed&	operator=(const Fixed& );

		/* COMPARISON OPERATOR	*/
		bool	operator>(const Fixed& );
		bool	operator<(const Fixed& );
		bool	operator>=(const Fixed& );
		bool	operator<=(const Fixed& );
		bool	operator==(const Fixed& );
		bool	operator!=(const Fixed& );

		/*	ARITHMETIC OPERATOR	*/
		const Fixed	operator+(const Fixed& ) const;
		const Fixed	operator-(const Fixed& ) const;
		const Fixed	operator*(const Fixed& ) const;
		const Fixed	operator/(const Fixed& ) const;
		
		const Fixed	operator++(void);
		const Fixed	operator++(int);
		const Fixed	operator--(void);
		const Fixed	operator--(int);

		static Fixed& min(Fixed& number, Fixed& value);
		static const Fixed& min(const Fixed& number, const Fixed& value);
		static Fixed& max(Fixed& number, Fixed& value);
		static const Fixed& max(const Fixed& number, const Fixed& value);

		
		
		int		getRawBits(void) const;
		void	setRawBits(int const );
		float	toFloat(void) const;
		int		toInt(void)	const;
};

std::ostream& operator<<(std::ostream& ,const Fixed& );

#endif