/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:18:52 by erantala          #+#    #+#             */
/*   Updated: 2025/07/31 23:04:48 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <Weapon.hpp>

class HumanB
{
	private:
		std::string _name;
		Weapon *weapon;
	public:
		void	attack();
		void	setName(std::string new_name);
		void	setWeapon(Weapon &new_weapon);
		HumanB(std::string _name);
		HumanB(std::string _name);
		~HumanB();
}