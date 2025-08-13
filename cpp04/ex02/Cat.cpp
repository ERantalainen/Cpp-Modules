/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:00:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 15:49:09 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor called\n";
	_brain = new Brain;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat has died\n";
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