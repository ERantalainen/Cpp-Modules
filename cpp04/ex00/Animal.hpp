/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:47:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 15:16:13 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		virtual void	makeSound() const;
		Animal();
		~Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		std::string	getType() const;
};