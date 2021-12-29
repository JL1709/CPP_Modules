/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:29:55 by jludt             #+#    #+#             */
/*   Updated: 2021/12/13 15:02:51 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 9.5f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 5.25f ) + Fixed( 2 ) );
	Fixed const e( Fixed( 5.25f ) - Fixed( 2 ) );
	std::cout << "a         = " << a << std::endl;
	std::cout << "++a       = " << ++a << std::endl;
	std::cout << "a         = " <<a << std::endl;
	std::cout << "a++       = " << a++ << std::endl;
	std::cout << "a         = " << a << std::endl;
	std::cout << "--a       = " << --a << std::endl;
	std::cout << "a         = " << a << std::endl;
	std::cout << "a--       = " << a-- << std::endl;
	std::cout << "a         = " << a << std::endl;
	std::cout << "b         = " << b << std::endl;
	std::cout << "c         = " << c << std::endl;
	std::cout << "d         = " << d << std::endl;
	std::cout << "e         = " << e << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;

	if (a < b)
		std::cout << "a < b  (true1)" << std::endl;
	if (a <= b)
		std::cout << "a <= b (true2)" << std::endl;
	if (a > b)
		std::cout << "a > b  (true3)" << std::endl;
	if (a >= b)
		std::cout << "a >= b (true4)" << std::endl;
	if (a != b)
		std::cout << "a != b (true5)" << std::endl;
	if (a == b)
		std::cout << "a == b (true6)" << std::endl;
	a = b;
	if (a < b)
		std::cout << "a < b  (true7)" << std::endl;
	if (a <= b)
		std::cout << "a <= b (true8)" << std::endl;
	if (a > b)
		std::cout << "a > b  (true9)" << std::endl;
	if (a >= b)
		std::cout << "a >= b (true10)" << std::endl;
	if (a != b)
		std::cout << "a != b (true11)" << std::endl;
	if (a == b)
		std::cout << "a == b (true12)" << std::endl;
	return (0);
}