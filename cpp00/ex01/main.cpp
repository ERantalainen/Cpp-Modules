/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:53:03 by erantala          #+#    #+#             */
/*   Updated: 2025/06/12 22:28:45 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contacts.hpp"

int	main ()
{
	Phonebook list;
	std::string input;
	while (1)
	{
std::cout << "Please input a command: ADD, SEARCH, EXIT" << std::endl;
	std::cin >> input;
	if (input.compare("ADD") == 0)
		list.add();
	else if (input.compare("SEARCH") == 0)
		list.search();
	else if (input.compare("EXIT") == 0)
		exit (0);
	input.clear();
	}
}