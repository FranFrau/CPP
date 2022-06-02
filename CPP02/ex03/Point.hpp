/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:47:13 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/02 13:06:59 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Fixed const &getX(void) const;
		Fixed const &getY(void) const;

		Point	&operator=(Point const &other);

		Point(void);
		Point(Point const &other);
		Point(Fixed const x, Fixed const y);
		~Point(void);
};
#endif