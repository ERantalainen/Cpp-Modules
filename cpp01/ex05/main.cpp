/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:45:03 by erantala          #+#    #+#             */
/*   Updated: 2025/08/07 16:05:53 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main ()
{
	Harl complainer;
	std::cout << "Starting to complain" << std::endl;
	complainer.complain("DEBUG");
	complainer.complain("INFO");
	complainer.complain("WARNING");
	complainer.complain("ERROR");
	complainer.complain("FAKE");
	std::cout << "Done complaining" << std::endl;
}