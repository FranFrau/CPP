/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:32:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/02 12:36:43 by ffrau            ###   ########.fr       */
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
		Fixed& operator=(const Fixed &fixed);
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed & max(Fixed &a, Fixed &b);
		static Fixed & min(Fixed &a, Fixed &b);
		static const Fixed & max(Fixed const &a, Fixed const &b);
		static const Fixed & min(Fixed const &a, Fixed const &b);

		Fixed();
		Fixed(Fixed &fixed);
		Fixed(const Fixed &fixed);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
};

std::ostream& operator<<(std::ostream & os, Fixed const & i);

#endif