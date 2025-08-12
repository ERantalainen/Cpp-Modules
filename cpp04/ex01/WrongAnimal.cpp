/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:02:56 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 15:03:07 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called\n";
	_type = "not even an animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has died\n";
}

WrongAnimal::WrongAnimal (const WrongAnimal &obj)
{
	std::cout << "WrongAnimal has been cloned\n";
	*this = obj;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal clone assignment called\n";
	this->_type = obj._type;
	return	*this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimals don't make sounds\n";
}

std::string	WrongAnimal::getType() const
{
	return _type;
}