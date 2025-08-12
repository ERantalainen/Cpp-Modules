/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:58:34 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:14:18 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain;
	std::cout << "Dog constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog has died\n";
	delete _brain;
}

Dog::Dog (const Dog &obj)
{
	std::cout << "Dog has been cloned\n";
	_brain	= new Brain;
	*_brain = obj._brain;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog clone assignment called\n";
	this->_type = obj._type;
	return	*this;
}

void	Dog::makeSound() const
{
	std::cout << "AwooooOOOOooooOOOOOOOOooooooooo\n";
}