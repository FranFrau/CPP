/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:38:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 23:51:37 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <exception>
#include <limits>

class Span
{
	private:
		unsigned int	_n;
		std::list<int>	_list;
	public:
		std::list<int>	getList() const;
		unsigned int	getN() const;
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addNumber(int n);

		class OutOfBoundException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Out of bound. Koj";
				}
		};
		
		class EmptySTLException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return "Too few args. Koj";
				}
		};

		Span() : _n(0) {}
		Span(unsigned int n) : _n(n) {}
			Span(Span const &copy);
		~Span() {}
		
		Span &operator=(Span const &span);
};
