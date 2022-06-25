/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:38:15 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/25 15:43:35 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <exception>
#include <limits>

#define RED "\033[31m"
#define NONE "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
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
		void			addNumber(int n, int n2);

		class OutOfBoundException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return ("Out of bound. Koj");
				}
		};
		
		class EmptySTLException : public std::exception{
			public:
				virtual const char * what () const throw () {
					return ("Too few args. Koj");
				}
		};

		Span() : _n(0) {}
		Span(unsigned int n) : _n(n) {}
			Span(Span const &copy);
		~Span() {}
		
		Span &operator=(Span const &span);
};
