/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:32:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/01 14:22:31 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_numberValue;
		static const int	_fractBits = 8;
	public:
		int getRawBits(void) const;
		int	toInt(void) const;
		float	toFloat(void) const;
		void	setRawBits(int const raw);
		Fixed& operator=(const Fixed& fixed);

		Fixed();
		Fixed(Fixed &fixed);
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif