/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:32:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/01 10:42:09 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	private:
		int					_numberValue;
		static const int	fractBits = 8;
	public:
		int getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed& operator=(const Fixed& fixed);

		Fixed();
		Fixed(Fixed &fixed);
		~Fixed();
};