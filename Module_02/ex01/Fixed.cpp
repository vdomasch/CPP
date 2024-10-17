/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:47:27 by vdomasch          #+#    #+#             */
/*   Updated: 2024/10/16 15:13:43 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i): fixed_point(i << fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): fixed_point(roundf(f * (1 << fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other):	fixed_point(other.fixed_point)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->fixed_point = other.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->fixed_point / (double)(1 << fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point >> fractional_bits);
}

std::ostream&	operator<<(std::ostream &value, const Fixed& other)
{
	value << other.toFloat();
	return (value);
}