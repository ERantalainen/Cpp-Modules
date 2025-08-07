/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:07:22 by erantala          #+#    #+#             */
/*   Updated: 2025/08/07 18:00:23 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	private:
		int						_value;
		static const u_int8_t	_fract = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed& obj);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};