/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 01:00:11 by erantala          #+#    #+#             */
/*   Updated: 2025/06/13 01:03:52 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ()
{
	std::string 	s = "HI THIS IS BRAIN";
	std::string*	ptr = &s;
	std::string		&ref = s;

	std::cout << &s << std::endl;;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;

	std::cout << s << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}