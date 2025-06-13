/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:58:34 by erantala          #+#    #+#             */
/*   Updated: 2025/06/13 15:17:45 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main (int argc, char **argv)
{
	if (argc < 4)
		std::cout << "Too few arguments: /sed filename s1 s2" << std::endl;
	if (argc > 5)
		std::cout << "Too many arguments: /sed filename s1 s2" << std::endl;
	std::ifstream file(argv[1]);
	if (file.is_open() == 0)
		std::cout << "Unable to open file, did you make a typo?" << std::endl;

}
