/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:33:41 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 17:54:31 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	health = 100;
	energy = 100;
	damage = 30;
	_name = "FR4G-TP";
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name)
{
	health = 100;
	energy = 50;
	damage = 30;
	_name = name;
	std::cout << "FragTrap overload constructor called\n";
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "Frag Copy constructor called\n";
	*this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "Frag Copy assignment constructor called \n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	_name = obj._name;
	return *this;
}

void	FragTrap::highFivesGuys()
{
	if (health <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return ;
	}
	std::cout << _name << " is requesting one uptop!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap blew up\n";
}