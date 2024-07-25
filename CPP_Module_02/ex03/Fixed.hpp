/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:21:24 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 14:25:01 by vdomasch         ###   ########.fr       */
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
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	
	Fixed(const Fixed& value);		//copy constructor
	Fixed	&operator=(const Fixed& value);	//copy assignment
	
	float	toFloat(void) const;
	int 	toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	/*			Comparison Operators		*/
	bool	operator>(const Fixed& nb);
	bool	operator<(const Fixed& nb);
	bool	operator>=(const Fixed& nb);
	bool	operator<=(const Fixed& nb);
	bool	operator==(const Fixed& nb);
	bool	operator!=(const Fixed& nb);

	/*			Arithmetic Operators		*/
	Fixed	operator+(const Fixed& nb) const;
	Fixed	operator-(const Fixed& nb) const;
	Fixed	operator*(const Fixed& nb);
	Fixed	operator/(const Fixed& nb) const;

	/*			Increment && Decrement		*/
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	/*				Min && Max				*/
	static Fixed		&min(Fixed& nb1, Fixed& nb2);
	static const Fixed	&min(const Fixed& nb1, const Fixed& nb2);
	static Fixed		&max(Fixed& nb1, Fixed& nb2);
	static const Fixed	&max(const Fixed& nb1, const Fixed& nb2);
};

std::ostream	&operator<<(std::ostream& result, const Fixed& value);

#endif