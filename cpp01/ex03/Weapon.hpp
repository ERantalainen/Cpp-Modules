/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:43:01 by erantala          #+#    #+#             */
/*   Updated: 2025/07/31 19:23:23 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	private:
		std::string type;
	
	public:
		std::string	getType();
		void		setType(std::string new_type);
		Weapon(std::string type);
		~Weapon();
}
