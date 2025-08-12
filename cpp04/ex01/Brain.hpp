/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:41:21 by erantala          #+#    #+#             */
/*   Updated: 2025/08/12 16:09:53 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
};