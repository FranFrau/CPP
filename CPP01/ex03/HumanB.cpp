/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:58:23 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 17:10:20 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

Weapon HumanB::getWeapon(void)
{
	return *(this->_weapon);
}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
