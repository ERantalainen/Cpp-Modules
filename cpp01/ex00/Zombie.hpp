/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:51:24 by erantala          #+#    #+#             */
/*   Updated: 2025/06/12 23:26:24 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private:
		std::string	_name;
		Zombie*		_ref;
	public:
		void		announce(void);
		void		setRef(Zombie *ref);
	Zombie(std::string name);
	~Zombie();
};