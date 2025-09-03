/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:27:28 by erantala          #+#    #+#             */
/*   Updated: 2025/09/03 16:51:57 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main ()
{
	Zombie *test = nullptr;
	try {
		test = newZombie("Robin Graves");
	} catch (...)
	{
		std::cerr << "Error allocating\n";
		return (1);
	}
	test->announce();
	randomChump("Chicken jockey");
	test->announce();
	randomChump("Waaa");

	delete	test;
	return (0);
}