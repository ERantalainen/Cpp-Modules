/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:25:31 by erantala          #+#    #+#             */
/*   Updated: 2025/08/13 17:17:28 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:

	public:
		AMateria(std::string const & type);
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}