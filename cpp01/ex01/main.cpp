/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:27:28 by erantala          #+#    #+#             */
/*   Updated: 2025/06/13 00:00:11 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name);

int	main ()
{
	Zombie *test;
	int	n = 6;
	int i = 0;

	test = zombieHorde(n, "Chiecken Jockey");
	while (i < n)
	{
		test[i].announce();
		i++;
	}

	delete[] test;
	return (0);
}