/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:51:19 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 18:52:41 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource &operator=(const MateriaSource &obj);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

};