/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:23:13 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 15:53:18 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	//std::cout << "Default constructor called" << std::endl;
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point(const Fixed x, const Fixed y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point& point)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->x.setRawBits(point.x.getRawBits());
	this->y.setRawBits(point.y.getRawBits());
}

Point &Point::operator=(const Point& point)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &point)
	{
		this->x.setRawBits(point.x.getRawBits());
		this->y.setRawBits(point.y.getRawBits());
	}
	return (*this);
}

Point::~Point()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}

void	Point::setX(const Fixed coord)
{
	this->x = coord;
}

void	Point::setY(const Fixed coord)
{
	this->x = coord;
}