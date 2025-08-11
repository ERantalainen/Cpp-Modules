/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:43:59 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 17:45:06 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main ()
{
	Claptrap one;
	Claptrap two ("Super Clap");
	ScavTrap three("Scavvie");
	ScavTrap four(three);
	ScavTrap five;

	std::cout << std::endl;
	five.GuardGate();
	one.attack("two");
	two.takeDamage(0);
	three.attack("two");
	two.takeDamage(20);
	two.beRepaired(1);
	four.beRepaired(1);
	one.beRepaired(1);
	three.GuardGate();
	three.attack("one");
	one.takeDamage(20);
	five.takeDamage(50);
	five.GuardGate();
	five.takeDamage(50);
	five.GuardGate();
	std::cout << std::endl;

	return (0);
}