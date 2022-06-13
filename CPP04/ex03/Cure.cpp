/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:43:45 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/13 16:25:43 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure &copy)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure &Cure::operator=(Cure &equals)
{
	this->_type = equals._type;
	return (*this);
}

Cure*	Cure::clone() const
{
	Cure	*cure = new Cure();

	return (cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
