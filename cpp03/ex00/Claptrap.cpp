/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:34:06 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 16:35:41 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void	Claptrap::attack(const std::string& target)
{
	if (health <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << _name << " is too tired to do that\n";
		return ;
	}
	std::cout << _name << " attacks " << target << " for " << damage << std::endl;
	energy--;
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (health <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return ;
	}
	if (energy <= 0)
	{
		std::cout << _name << " is too tired to do that\n";
		return ;
	}
	std::cout << _name << " is repaired for " << amount << std::endl;
	health += amount;
	energy--;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " damage" << std::endl;
	health -= amount;
}

Claptrap::Claptrap(std::string name) : _name(name)
{
	std::cout << "Overload constructor called" << std::endl;
}

Claptrap::Claptrap()
{
	std::cout << "Default constructor called \n";
	_name = "CL4P-TP";
}

Claptrap::Claptrap(const Claptrap &obj)
{
	std::cout << "Copy constructor called \n";
	*this = obj;
}

Claptrap &Claptrap::operator=(const Claptrap &obj)
{
	std::cout << "Copy assignment constructor called \n";
	this->health = obj.health;
	this->energy = obj.energy;
	this->damage = obj.damage;
	this->_name = obj._name;
	return *this;
}

Claptrap::~Claptrap()
{
	std::cout<< "Default deconstructor called \n";
}