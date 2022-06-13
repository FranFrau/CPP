/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:37:37 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:25:48 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice &copy)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(Ice &equals)
{
	this->_type = equals._type;
	return (*this);
}

Ice*	Ice::clone() const
{
	Ice	*ice = new Ice();

	return (ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
