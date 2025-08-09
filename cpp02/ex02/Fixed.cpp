/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:14:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/09 23:27:56 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"
#include <compare>

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
	_value = roundf((val) * ((float)(1 << _fract)));
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

std::strong_ordering	Fixed::operator<=>(const Fixed &obj) const
{
	return (this->getRawBits() <=> obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
	if (this->getRawBits() == obj.getRawBits())
		return (1);
	return (0);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	return Fixed((float)(this->toFloat() + obj.toFloat()));
}
Fixed	Fixed::operator-(const Fixed& obj) const
{
	return Fixed((this->toFloat() - obj.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed	Fixed::operator++(int)
{
	float	ret = this->toFloat();
	this->setRawBits(this->getRawBits() + 1);
	return (ret);
}

Fixed	Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return Fixed(this->toFloat());
}

Fixed	Fixed::operator--(int)
{
	float	ret = this->toFloat();
	this->setRawBits(this->getRawBits() - 1);
	return Fixed(ret);
}

Fixed	Fixed::operator--()
{

	this->setRawBits(this->getRawBits() - 1);
	return Fixed(this->toFloat());
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
	return roundf((_value) / (1 << _fract));
}

Fixed&	Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

const Fixed&	Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

const Fixed&	Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return obj1;
	else
		return obj2;
}

std::ostream&	operator<<(std::ostream &out, Fixed const& obj)
{
	out << obj.toFloat();
	return out;
}