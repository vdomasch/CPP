/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdomasch <vdomasch@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:14:18 by vdomasch          #+#    #+#             */
/*   Updated: 2024/11/26 17:11:43 by vdomasch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(Fixed( 5.05f ));
	Fixed const b(a * Fixed( 6488 ));
	Fixed const c(b - Fixed( 2 ));
	Fixed const d(c / Fixed( 4 ));
	Fixed const e(d + Fixed( 2 ));

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(d, e): " << Fixed::min( d, e ) << std::endl;

	return (0);
}