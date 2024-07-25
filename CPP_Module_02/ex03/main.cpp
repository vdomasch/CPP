/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:23:29 by vdomasch          #+#    #+#             */
/*   Updated: 2024/07/25 15:59:07 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	
	if (bsp(Point(1.0f, 1.0f), Point(5.0f, 5.0f), Point(6.0f, 4.0f), Point(4.0f, 3.0f)))
		std::cout << "Point is inside the triangle drawn by ABC!" << std::endl;
	else
		std::cout << "Point is outside the triangle drawn by ABC!" << std::endl;
	return (0);
}