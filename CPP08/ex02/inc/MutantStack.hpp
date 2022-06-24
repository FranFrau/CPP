/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:41:55 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/24 17:42:29 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <list>

template<typename T>
class MutantStack: public std::stack<T>
{
	private:
	public:
		MutantStack<T>( void ) {}
		~MutantStack<T>( void ) {}

		MutantStack<T>( const MutantStack<T> &src )
		{
			*this = src;
		}

		MutantStack<T>	&operator=( const MutantStack<T> &rhs )
		{
			this->c = rhs.c;
			return(*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void )
		{
			return this->c.begin();
		}
		iterator	end( void ) {
			return this->c.end();
		}
};

#endif
