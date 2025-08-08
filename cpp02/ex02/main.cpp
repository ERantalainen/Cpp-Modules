/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:56:43 by erantala          #+#    #+#             */
/*   Updated: 2025/08/08 19:18:04 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <compare>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << (a < b) << std::endl;
	Fixed const c(a);
	std::cout << "C is " << c << " and A is " << a << std::endl;
	a = a - c - c - c;
	std::cout << a << std::endl;
	std::cout << a.toInt() << std::endl;
	std::cout << ++a << std::endl;
	Fixed d((b * b));
	std::cout << "b * b is " << d << std::endl;
	std::cout << "b / b " << (b / b) << std::endl;
	std::cout << "b <= b " << (b <= b) << " b <= a " << (b <= a) << std::endl;
	std::cout << "b != a " << (b != a) << std::endl;
	std::cout << "b == a " << (b == a) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	return 0;
}