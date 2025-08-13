/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:58:34 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 15:49:15 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog constructor called\n";
	_brain = new Brain;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog has died\n";
}

Dog::Dog (const Dog &obj)
{
	std::cout << "Dog has been cloned\n";
	_brain	= new Brain;
	_brain = obj._brain;
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