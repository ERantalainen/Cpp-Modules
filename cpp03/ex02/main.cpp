/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:43:59 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 17:54:44 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main ()
{
	Claptrap one;
	Claptrap two ("Super Clap");
	FragTrap three("Thermal Detonator");
	FragTrap four(three);
	FragTrap five;
	ScavTrap six;
	ScavTrap seven ("Scavvie");

	std::cout << std::endl;
	one.attack("two");
	two.takeDamage(0);
	three.attack("two");
	two.takeDamage(30);
	two.beRepaired(1);
	four.beRepaired(1);
	one.beRepaired(1);
	three.attack("one");
	one.takeDamage(30);
	five.takeDamage(50);
	five.highFivesGuys();
	five.takeDamage(50);
	five.highFivesGuys();
	six.attack("Thermal Detonator");
	four.takeDamage(20);
	std::cout << std::endl;

	return (0);
}