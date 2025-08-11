/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:43:59 by erantala          #+#    #+#             */
/*   Updated: 2025/08/11 18:24:48 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main ()
{
	ClapTrap one;
	ClapTrap two ("Super Clap");
	ClapTrap three(two);
	ClapTrap four = two;

	one.attack("two");
	two.takeDamage(0);
	three.attack("two");
	two.takeDamage(0);
	two.takeDamage(15);
	two.beRepaired(1);
	four.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
	one.beRepaired(1);
}