/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:00:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:11:27 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "Cat constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat has died\n";
	delete _brain;
}

Cat::Cat (const Cat &obj)
{
	std::cout << "Cat has been cloned\n";
	*this = obj;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat clone assignment called\n";
	this->_type = obj._type;
	return	*this;
}

void	Cat::makeSound() const
{
	std::cout << "MEEEEEEEEEOWWWWWWWWWWWWWWWWWW\n";
}