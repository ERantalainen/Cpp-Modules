/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:15:25 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:20:07 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain has been made\n";
}

Brain::~Brain()
{
	std::cout << "Brain has withered away\n";
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "A copy of brain has been made\n";
}

Brain	&Brain::operator=(const Brain &obj)
{
	ideas = obj.ideas;
	return *this;
}
