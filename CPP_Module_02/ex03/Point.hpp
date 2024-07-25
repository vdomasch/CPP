/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:23:16 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 15:51:33 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
	Fixed	x;
	Fixed	y;

	public:
	Point();
	Point(const Fixed, const Fixed);
	Point(const Point&);
	Point &operator=(const Point&);
	~Point();
	Fixed	getX() const;
	Fixed	getY()const;
	void	setX(const Fixed);
	void	setY(const Fixed);
};

#endif