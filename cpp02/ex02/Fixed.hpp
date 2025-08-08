/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:07:22 by erantala          #+#    #+#             */
/*   Updated: 2025/08/08 18:38:58 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <compare>

class Fixed
{
	private:
		int						_value;
		static const u_int8_t	_fract = 8;
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed&	operator=(const Fixed& obj);

		Fixed					operator+(const Fixed& obj) const;
		Fixed					operator-(const Fixed& obj) const;
		Fixed					operator*(const Fixed& obj) const;
		Fixed					operator/(const Fixed& obj) const;
		std::strong_ordering	operator<=>(const Fixed& obj) const;
		Fixed						operator++(int);
		Fixed						operator--(int);
		Fixed						operator++();
		Fixed						operator--();


		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&	min(Fixed	&obj1, Fixed &obj2);
		static Fixed&	min(const Fixed &obj1, const Fixed &obj2);
		static Fixed&	max(Fixed	&obj1, Fixed &obj2);
		static Fixed&	max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream&	operator<<(std::ostream &out, Fixed const& obj);