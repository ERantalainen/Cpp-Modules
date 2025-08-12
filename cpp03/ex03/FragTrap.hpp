/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:22:01 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:05:23 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		void	attack(const std::string& target);
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap& operator=(const FragTrap &obj);
		FragTrap(const FragTrap &obj);
		void	highFivesGuys(void);
};

