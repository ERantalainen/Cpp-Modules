/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:33:41 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 17:43:47 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	health = 100;
	energy = 50;
	damage = 20;
	_name = "SC4V-TP";
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name)
{
	health = 100;
	energy = 50;
	damage = 20;
	_name = name;
	std::cout << "ScavTrap overload constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "Scav Copy constructor called\n";
	*this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "Scav Copy assignment constructor called \n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	_name = obj._name;
	return *this;
}

void	ScavTrap::GuardGate()
{
	if (health <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return ;
	}
	std::cout << _name <<" is now in Gatekeeper mode\n";
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is scrap again\n";
}