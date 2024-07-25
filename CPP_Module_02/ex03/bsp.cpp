/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:29:46 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 16:47:15 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	//Coordinates of points
	

	//Vector representation
	Point vectAB(Fixed(b.getX().toFloat() - a.getX().toFloat()), Fixed(b.getY().toFloat() - a.getY().toFloat()));
	Point vectAC(Fixed(c.getX().toFloat() - a.getX().toFloat()), Fixed(c.getY().toFloat() - a.getY().toFloat()));
	Point vectBC(Fixed(c.getX().toFloat() - b.getX().toFloat()), Fixed(c.getY().toFloat() - b.getY().toFloat()));
	
	Point vectAPoint(Fixed(point.getX().toFloat() - a.getX().toFloat()), Fixed(point.getY().toFloat() - a.getY().toFloat()));
	Point vectBPoint(Fixed(point.getX().toFloat() - b.getX().toFloat()), Fixed(point.getY().toFloat() - b.getY().toFloat()));
	
	//Cross products
	Fixed	crossABPoint((vectAB.getX() * vectAPoint.getY() - vectAB.getY() * vectAPoint.getX()));
	Fixed	crossABC((vectAB.getX() * vectAC.getY() - vectAB.getY() * vectAC.getX()));
	Fixed	crossACPoint((vectAC.getX() * vectAPoint.getY() - vectAC.getY() * vectAPoint.getX()));
	Fixed	crossACB((vectAC.getX() * vectAB.getY() - vectAC.getY() * vectAB.getX()));
	Fixed	crossBCPoint((vectBC.getX() * vectBPoint.getY() - vectBC.getY() * vectBPoint.getX()));
	Fixed	crossBCA(vectBC.getX() * (vectAB.getY() * -1.0F) - vectBC.getY() * (vectAB.getX() * -1.0F));
	if (crossABPoint.toFloat() / crossABC.toFloat() > 0.0f)
		if (crossACPoint.toFloat() / crossACB.toFloat() > 0.0f)
			if (crossBCPoint.toFloat() / crossBCA.toFloat() > 0.0f)
				return (true);

	//std::cout << "ABPoint: "<< crossABPoint.toFloat() << "\nABC: " << crossABC.toFloat() << "\nACPoint: " << crossACPoint.toFloat() << "\nACB: " << crossACB.toFloat() << "\nBCPoint: " << crossBCPoint.toFloat() << "\nBCA: " << crossBCA.toFloat() << std::endl;

	return (false);
}
