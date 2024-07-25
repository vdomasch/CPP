/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:21:37 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 16:50:24 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const int integer): number(integer << this->bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_num): number(round(float_num * (1 << this->bits))) //round used to have same value as example
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& value)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(value.getRawBits());
}

Fixed	&Fixed::operator=(const Fixed& value)
{
//	std::cout << "Copy assignement operator called" << std::endl;
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
	return ((float)this->getRawBits() / (1 << this->bits));
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

/*					COMPARISON OPERATOR					*/

bool	Fixed::operator>(const Fixed& nb)
{
	return (this->getRawBits() > nb.getRawBits());
}

bool	Fixed::operator<(const Fixed& nb)
{
	return (this->getRawBits() < nb.getRawBits());
}

bool	Fixed::operator>=(const Fixed& nb)
{
	return (this->getRawBits() >= nb.getRawBits());
}

bool	Fixed::operator<=(const Fixed& nb)
{
	return (this->getRawBits() <= nb.getRawBits());
}

bool	Fixed::operator==(const Fixed& nb)
{
	return (this->getRawBits() == nb.getRawBits());
}

bool	Fixed::operator!=(const Fixed& nb)
{
	return (this->getRawBits() != nb.getRawBits());
}

/*					ARITHMETIC OPERATOR					*/

Fixed	Fixed::operator+(const Fixed& nb) const
{
	return Fixed(this->toFloat() + nb.toFloat());
}

Fixed	Fixed::operator-(const Fixed& nb) const
{
	return Fixed(this->toFloat() - nb.toFloat());
}
                                                                                             
Fixed	Fixed::operator*(const Fixed& nb)
{
	Fixed val = *this;
	long int	x, y;
	x = (long)this->getRawBits();
	y = (long)nb.getRawBits();
	val.setRawBits(x * y / (1 << bits));
	return (val);
}

Fixed	Fixed::operator/(const Fixed& nb) const
{
	Fixed val = *this;
	long int	x, y;
	x = (long)this->getRawBits();
	y = (long)nb.getRawBits();
	val.setRawBits(x * (1 << bits)/ y);
	return (val);
}

/*					INCREMENT && DECREMENT				*/

Fixed&	Fixed::operator++(void)
{
	++this->number;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed&	Fixed::operator--(void)
{
	--this->number; 
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}



/*						MIN && MAX						*/

Fixed	&Fixed::min(Fixed& nb1, Fixed& nb2)
{
	if (nb1.getRawBits() <= nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed	&Fixed::min(const Fixed& val1, const Fixed& val2)
{
	if (val1.getRawBits() <= val2.getRawBits())
		return (val1);
	return (val2);
}

Fixed	&Fixed::max(Fixed& nb1, Fixed& nb2)
{
	if (nb1.getRawBits() >= nb2.getRawBits())
		return (nb1);
	return (nb2);
}

const Fixed	&Fixed::max(const Fixed& val1, const Fixed& val2)
{
	if (val1.getRawBits() >= val2.getRawBits())
		return (val1);
	return (val2);
}
