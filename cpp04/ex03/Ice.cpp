/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:22:34 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 18:42:13 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Water has been frozen into Ice\n";
}

Ice::~Ice()
{
	std::cout << "Ice has melted.\n";
}

Ice::Ice(const Ice &obj)
{
	this->_type = "ice";
	std::cout << "Ice clone constructor called\n";
}
