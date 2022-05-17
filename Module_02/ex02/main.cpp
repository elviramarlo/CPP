/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elvmarti <elvmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:40:43 by elvmarti          #+#    #+#             */
/*   Updated: 2022/05/18 01:38:59 by elvmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << "---------------" << std::endl;
	{
		Fixed a(20);
		Fixed b(36.5f);
		Fixed c = a + b;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		
		if (a != b)
			std::cout << "a != b" << std::endl;
	}
	
	return 0;
}