/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:41:00 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/23 18:44:49 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(Span const &span)
{
	*this = span;
	// std::cout << "Span copy constructor called" << std::endl;
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