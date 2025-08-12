/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:49:38 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 15:17:04 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal has died\n";
}

Animal::Animal (const Animal &obj)
{
	std::cout << "Animal has been cloned\n";
	*this = obj;
}

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Animal clone assignment called\n";
	this->_type = obj._type;
	return	*this;
}

void	Animal::makeSound() const
{
	std::cout << "Animals make sounds sometimes\n";
}

std::string	Animal::getType() const
{
	return _type;
}