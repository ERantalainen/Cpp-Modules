/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:07:19 by erantala          #+#    #+#             */
/*   Updated: 2025/08/07 15:00:41 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


int main (int argc, char **argv)
{
	std::string	new_name;
	std::string	curr;
	std::string	copy = "";
	std::string	replacement;
	size_t		pos;

	if (argc < 4)
	{
		std::cout << "Too few arguments: /sed filename s1 s2" << std::endl;
		return (1);
	}
	if (argc > 5)
	{
		std::cout << "Too many arguments: /sed filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (file.is_open() == 0)
	{
		std::cout << "Unable to open file, check filename" << std::endl;
		return (1);
	}
	new_name = argv[1];
	new_name = new_name.append(".replace");
	std::ofstream replace(new_name);
	replacement = argv[2];
	while(getline(file, curr))
	{
		pos = curr.find(argv[2]);
		if (pos != std::string::npos)
		{
			if (pos > 0)
			{
				copy = curr.substr(0, pos);
				copy.append(argv[3]);
			}
			else
				copy = argv[3];
			copy = copy + curr.substr(pos + replacement.length(), std::string::npos);
		}
		else
			copy = curr;
		replace << copy << std::endl;
		copy = copy.empty();
		curr = curr.empty();
	}
	file.close();
	replace.close();
}