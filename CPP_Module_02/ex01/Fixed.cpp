/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:38:01 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 10:40:08 by vdomasch         ###   ########.fr       */
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
	std::cout << "Int constructor called" << std::endl;
	this->number = integer << this->bits;
}

Fixed::Fixed(float float_num)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = float_num * (1 << this->bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& value)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = value.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed& value)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &value)
	{
		this->number = value.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->number / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (this->number >> this->bits);
}

std::ostream	&operator<<(std::ostream &result, const Fixed &value)
{
	result << value.toFloat();
	return (result);
}