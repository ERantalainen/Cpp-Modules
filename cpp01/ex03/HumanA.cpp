/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:21:36 by erantala          #+#    #+#             */
/*   Updated: 2025/08/06 16:35:48 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
	std::cout << _name + " attacks with their " + weapon.getType() << std::endl;
}

void	HumanA::setName(std::string new_name)
{
	_name = new_name;
}

HumanA::HumanA(std::string _name, Weapon &weapon) : _name(_name), weapon(weapon)
{}

HumanA::~HumanA()
{}



