/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:27:28 by erantala          #+#    #+#             */
/*   Updated: 2025/09/05 15:27:51 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int	main ()
{
	Zombie *test = nullptr;
	int	n = 6;
	int i = 0;

	try {
		test = zombieHorde(n, "Baby Zombie");
	} catch (...)
	{
		std::cerr << "Error allocating\n";
		return (1);
	}
	while (i < n)
	{
		test[i].announce();
		i++;
	}

	delete[] test;
	return (0);
}