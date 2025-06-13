/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:51:26 by erantala          #+#    #+#             */
/*   Updated: 2025/06/12 23:54:55 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie()
{
	std::cout << _name + " destructor called" << std::endl;
}

Zombie::Zombie() : _name("secret")
{}

Zombie::Zombie(std::string name) : _name(name)
{}
void	Zombie::setName(std::string name)
{	_name = name; }