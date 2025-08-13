/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:47:46 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 17:17:36 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	private:

	protected:
		std::string	_type;
	public:
		virtual void	makeSound() const = 0;
		Animal();
		virtual ~Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		std::string	getType() const;
};