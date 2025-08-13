/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:55:18 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:11:00 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void	makeSound() const;
};