/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 23:48:39 by erantala          #+#    #+#             */
/*   Updated: 2025/06/12 23:56:28 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i = 0;
	
	Zombie* res = new Zombie[N];
	while (i < N)
	{
		res[i].setName(name);
		i++;
	}
	return (res);
}