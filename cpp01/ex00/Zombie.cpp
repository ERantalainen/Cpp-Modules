/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:51:26 by erantala          #+#    #+#             */
/*   Updated: 2025/06/12 23:40:46 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{	std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie()
{
	std::cout << _name + " destructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{}

void	Zombie::setRef(Zombie *ref)
{	_ref = ref; }