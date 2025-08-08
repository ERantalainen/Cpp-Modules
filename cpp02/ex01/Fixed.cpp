/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:14:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/08 17:32:04 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	_value = val * ((float)(1 << _fract));
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called\n";
	_value = val * (1 << _fract);
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	this->_value = obj.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
		return ((float) _value / (float)(1 << _fract));
}

int		Fixed::toInt(void) const
{
	return (_value) / (1 << _fract);
}

std::ostream&	operator<<(std::ostream &out, Fixed const& obj)
{
	out << obj.toFloat();
	return out;
}