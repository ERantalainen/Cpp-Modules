/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:31:48 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 18:25:36 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int			health = 10;
		int			energy = 10;
		int			damage = 0;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(std::string name);
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap& operator=(const ClapTrap& obj);
};