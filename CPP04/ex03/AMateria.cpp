/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:33:50 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:19:42 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor called" << std::endl;
	this->_type = "ppunzo";
}

AMateria::AMateria(AMateria &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Type constructor called" << std::endl;
	this->_type = type;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria &equals)
{
	this->_type = equals._type;
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
