/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:34:06 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 18:25:15 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void	ClapTrap::attack(const std::string& target)
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

void	ClapTrap::beRepaired(unsigned int amount)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " damage" << std::endl;
	health -= amount;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Clap overload constructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called \n";
	_name = "CL4P-TP";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Clap copy constructor called \n";
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Clap copy assignment constructor called \n";
	this->health = obj.health;
	this->energy = obj.energy;
	this->damage = obj.damage;
	this->_name = obj._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout<< "ClapTrap deconstructor called \n";
}