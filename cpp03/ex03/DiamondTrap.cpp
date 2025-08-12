/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:07:42 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:08:29 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "D14M0ND-TP";
	ClapTrap::_name = _name + "_clap_name";
	health = FragTrap::health;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
	std::cout << "DiamondTrap default construcot called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond deconstuctor alled\n";
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap overload constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "Diamond copy constructor called\n";
	*this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "Diamond copy assignment constructor called\n";
	this->health = obj.health;
	this->energy = obj.energy;
	this->damage = obj.damage;
	this->_name = obj._name;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	if (health <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "I am " << _name << " and " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}