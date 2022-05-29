/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:08:10 by ffrau             #+#    #+#             */
/*   Updated: 2022/05/29 16:57:37 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

Weapon HumanA::getWeapon(void)
{
	return (this->_weapon);
}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}
