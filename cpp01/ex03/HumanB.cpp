/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:53:02 by erantala          #+#    #+#             */
/*   Updated: 2025/07/31 23:05:33 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Weapon.hpp>
#include <HumanB.hpp>

void HumanB::attack()
{
	std::cout << _name + "attacks with their" + weapon.getType() << std::endl;
}

void	HumanB::setName(std::string new_name)
{
	_name = new_name;
}

HumanB::HumanB(std::string _name) : _name(_name)
{
	weapon = new Weapon("unarmed");
}


void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

HumanB::~HumanB()
{}