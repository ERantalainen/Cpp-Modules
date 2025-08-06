/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:35:27 by erantala          #+#    #+#             */
/*   Updated: 2025/07/31 18:39:04 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Weapon.hpp>

std::string	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string	new_type)
{
	type = new_type;
}

Weapon::Weapon(std::string type)	: type(type)
{}

