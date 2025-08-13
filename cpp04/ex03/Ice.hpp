/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:27:51 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 18:22:27 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "AMateria.hpp"
class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
};