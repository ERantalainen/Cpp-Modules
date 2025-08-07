/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:04:36 by erantala          #+#    #+#             */
/*   Updated: 2025/08/07 16:06:15 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "Overconfidence is the most dangerous form of carelessness." << std::endl;
}

void	Harl::info()
{
	std::cout << "Sometimes things are just that important." << std::endl;
}

void	Harl::warning()
{
	std::cout<< "There is always a bigger fish." << std::endl;
}

void	Harl::error()
{
	std::cout << "Mistakes are valuable lessons often learned far too late." << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	arr[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == arr[i])
			return ((this->*ptr[i])());
	}
	std::cout << "No such level." << std::endl;
}