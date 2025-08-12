/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:22:01 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:05:27 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		void	attack(const std::string& target);
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &obj);
		ScavTrap(const ScavTrap &obj);
		void	GuardGate();
};