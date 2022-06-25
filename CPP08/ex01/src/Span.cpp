/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:41:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/25 15:42:13 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(Span const &span)
{
	*this = span;
}

Span	&Span::operator=(Span const &equals)
{
	this->_n = equals._n;
	return (*this);
}

unsigned int	Span::getN() const
{
	return (this->_n);
}

unsigned int	Span::shortestSpan()
{
	if (getList().size() <= 2)
		throw EmptySTLException();
	long min = LONG_MAX;
	std::list<int>::iterator it = this->_list.begin();
	for (unsigned int i = 0; i < this->_list.size(); i++)
	{
		std::list<int>::iterator tmp_it= it;
		int tmp_int = *it;
		tmp_it++;
		for (unsigned int j = i + 1; j < this->_list.size(); j++)
		{
			if (abs(tmp_int - *tmp_it) < min)
				min = abs(tmp_int - *tmp_it);

			tmp_it++;
		}
		it++;
	}
	return (min);
}

unsigned int	Span::longestSpan()
{
	if (getList().size() <= 2)
		throw EmptySTLException();

	int min = *std::min_element(this->_list.begin(), this->_list.end());
	int max = *std::max_element(this->_list.begin(), this->_list.end());

	return (max - min);
}

std::list<int>	Span::getList() const
{
	return (this->_list);
}

void	Span::addNumber(int n)
{
	if (getList().size() >= getN())
		throw  OutOfBoundException();
	this->_list.push_back(n);
}

void	Span::addNumber(int n, int n2)
{
	try
	{
		for (int i = n; i <= n2; i++)
		{
			this->addNumber(i);
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
