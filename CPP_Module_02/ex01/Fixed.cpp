/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:38:01 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/24 13:52:49 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(int integer)
{
	this->number = integer;
}

Fixed::Fixed(float float_num)
{
	this->number = float_num;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& fix)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = fix.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fix)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fix)
	{
		this->number = fix.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float toFloat(void)
{
	
}

int	toInt(void)
{
	
}