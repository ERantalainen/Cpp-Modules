/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:14:54 by erantala          #+#    #+#             */
/*   Updated: 2025/08/15 17:14:38 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter, public AMateria
{
	private:
		AMateria	*inventory;
	public:
		Character();
		~Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
};