/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:04:09 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 15:04:22 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has died\n";
}

WrongCat::WrongCat (const WrongCat &obj)
{
	std::cout << "WrongCat has been cloned\n";
	*this = obj;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat clone assignment called\n";
	this->_type = obj._type;
	return	*this;
}