/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:38:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 18:45:08 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Span
{
	private:
		unsigned int	_n;
	public:
		unsigned int	getN() const;
		void			addNumber();

		Span() : _n(0) {}
		Span(unsigned int n) : _n(n) {}
		Span(Span const &copy);
		~Span() {}
		
		Span &operator=(Span const &span);
};
